/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/types/gen-cpp/module_reflection.h"
#include <thrift/lib/cpp/Reflection.h>

namespace apache { namespace thrift { namespace fixtures { namespace types { namespace module_reflection_ {

// Reflection initializer for struct module.decorated_struct
void reflectionInitializer_2133116297910176940(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 2133116297910176940U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "struct module.decorated_struct";
  schema.names[dt.name] = id;
  dt.__isset.fields = true;
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[1];
    f.isRequired = true;
    f.type = 1U;
    f.name = "field";
    f.order = 0;
  }
}

}}}}} // namespace

