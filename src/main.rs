use pest::Parser;
use pest_derive::Parser;

#[derive(Parser)]
#[grammar = "ctp.pest"]
pub struct HeaderParser;

#[derive(Debug)]
pub struct StructDefinition {
    pub name: String,
    pub fields: Vec<Field>,
}

#[derive(Debug)]
pub struct Field {
    pub type_: String,
    pub name: String,
    pub is_array: Option<usize>,
}

fn parse_header_file(content: &str) -> Vec<StructDefinition> {
    let file = HeaderParser::parse(Rule::file, content)
        .expect("Parse failed")
        .next()
        .unwrap();

    let mut structs = Vec::new();

    for struct_def in file.into_inner() {
        if struct_def.as_rule() != Rule::struct_definition {
            continue;
        }

        let mut name = None;
        let mut fields = Vec::new();

        for part in struct_def.into_inner() {
            match part.as_rule() {
                Rule::name => name = Some(part.as_str().to_string()),
                Rule::field => {
                    let mut type_ = None;
                    let mut field_name = None;
                    let mut is_array = None;

                    for field_part in part.into_inner() {
                        match field_part.as_rule() {
                            Rule::type_ => type_ = Some(field_part.as_str().to_string()),
                            Rule::name => field_name = Some(field_part.as_str().to_string()),
                            Rule::number => {
                                is_array = Some(field_part.as_str().parse::<usize>().unwrap())
                            }
                            _ => (),
                        }
                    }

                    fields.push(Field {
                        type_: type_.unwrap(),
                        name: field_name.unwrap(),
                        is_array,
                    });
                }
                _ => (),
            }
        }

        structs.push(StructDefinition {
            name: name.unwrap(),
            fields,
        });
    }

    structs
}

fn main() {
    let header_content = r#"
        struct Person {
            int age;
            float height;
            char name[50];
            bool is_student;
        };
    "#;

    let structs = parse_header_file(header_content);
    println!("{:#?}", structs);
}
