/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_fatal.h"

#include <fatal/type/enum.h>

#include <type_traits>

namespace test_cpp2 { namespace cpp_reflection {

namespace thrift_fatal_impl_detail {

class enum1_enum_traits {
  struct enum1__struct_unique_strings_list {
    using field0 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0;
    using field1 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1;
    using field2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::enum1;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum1;
  using str = enum1__struct_unique_strings_list;
  using names = ::fatal::list<
      str::field0,
      str::field1,
      str::field2
  >;
  using values = ::fatal::sequence<
    type,
    type::field0,
    type::field1,
    type::field2
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::list<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0: return "field0";
      case type::field1: return "field1";
      case type::field2: return "field2";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum1_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum1_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(4992076682252594856ull)
  >
);
namespace thrift_fatal_impl_detail {

class enum2_enum_traits {
  struct enum2__struct_unique_strings_list {
    using field0_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0_2;
    using field1_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1_2;
    using field2_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2_2;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::enum2;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum2;
  using str = enum2__struct_unique_strings_list;
  using names = ::fatal::list<
      str::field0_2,
      str::field1_2,
      str::field2_2
  >;
  using values = ::fatal::sequence<
    type,
    type::field0_2,
    type::field1_2,
    type::field2_2
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::list<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0_2: return "field0_2";
      case type::field1_2: return "field1_2";
      case type::field2_2: return "field2_2";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum2_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum2_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(6888467747342894920ull)
  >
);
namespace thrift_fatal_impl_detail {

class enum3_enum_traits {
  struct enum3__struct_unique_strings_list {
    using field0_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0_3;
    using field1_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1_3;
    using field2_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2_3;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::enum3;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum3;
  using str = enum3__struct_unique_strings_list;
  using names = ::fatal::list<
      str::field0_3,
      str::field1_3,
      str::field2_3
  >;
  using values = ::fatal::sequence<
    type,
    type::field0_3,
    type::field1_3,
    type::field2_3
  >;

  class annotations {
    struct annotations__unique_annotations_keys {
      using _now_with_an_underscore = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::_now_with_an_underscore;
      using another_there = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::another_there;
      using duplicate_id_annotation_1 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::duplicate_id_annotation_1;
      using duplicate_id_annotation_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::duplicate_id_annotation_2;
      using one_here = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::one_here;
      using yet_another = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::yet_another;
    };

    struct annotations__unique_annotations_values {
      using _now_with_an_underscore = ::fatal::sequence<char, '_', 'n', 'o', 'w', '.', 'w', 'i', 't', 'h', '.', 'a', 'n', '.', 'u', 'n', 'd', 'e', 'r', 's', 'c', 'o', 'r', 'e'>;
      using another_there = ::fatal::sequence<char, '.'>;
      using duplicate_id_annotation_1 = ::fatal::sequence<char, 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e', ' ', 'i', 'd', ' ', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n'>;
      using duplicate_id_annotation_2 = ::fatal::sequence<char, 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e', '.', 'i', 'd', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n'>;
      using one_here = ::fatal::sequence<char, 'w', 'i', 't', 'h', ' ', 's', 'o', 'm', 'e', ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'a', 's', 's', 'o', 'c', 'i', 'a', 't', 'e', 'd'>;
      using yet_another = ::fatal::sequence<char, 'a', 'n', 'd', ' ', 'y', 'e', 't', ' ', 'm', 'o', 'r', 'e', ' ', 't', 'e', 'x', 't', ' ', '-', ' ', 'i', 't', '\'', 's', ' ', 't', 'h', 'a', 't', ' ', 'e', 'a', 's', 'y'>;
    };

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::list<
      ::apache::thrift::annotation<
        keys::_now_with_an_underscore,
        values::_now_with_an_underscore
      >,
      ::apache::thrift::annotation<
        keys::another_there,
        values::another_there
      >,
      ::apache::thrift::annotation<
        keys::duplicate_id_annotation_1,
        values::duplicate_id_annotation_1
      >,
      ::apache::thrift::annotation<
        keys::duplicate_id_annotation_2,
        values::duplicate_id_annotation_2
      >,
      ::apache::thrift::annotation<
        keys::one_here,
        values::one_here
      >,
      ::apache::thrift::annotation<
        keys::yet_another,
        values::yet_another
      >
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0_3: return "field0_3";
      case type::field1_3: return "field1_3";
      case type::field2_3: return "field2_3";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum3_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum3_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(4626344424889780008ull)
  >
);
namespace thrift_fatal_impl_detail {

class enum_with_special_names_enum_traits {
  struct enum_with_special_names__struct_unique_strings_list {
    using get = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::get;
    using getter = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::getter;
    using lists = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::lists;
    using maps = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::maps;
    using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::name;
    using name_to_value = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::name_to_value;
    using names = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::names;
    using prefix_tree = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::prefix_tree;
    using sets = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::sets;
    using setter = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::setter;
    using str = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::str;
    using strings = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::strings;
    using type = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::type;
    using value = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::value;
    using value_to_name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::value_to_name;
    using values = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::values;
    using id = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::id;
    using ids = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ids;
    using descriptor = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::descriptor;
    using descriptors = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::descriptors;
    using key = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::key;
    using keys = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::keys;
    using annotation = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::annotation;
    using annotations = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::annotations;
    using member = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::member;
    using members = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::members;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::enum_with_special_names;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum_with_special_names;
  using str = enum_with_special_names__struct_unique_strings_list;
  using names = ::fatal::list<
      str::get,
      str::getter,
      str::lists,
      str::maps,
      str::name,
      str::name_to_value,
      str::names,
      str::prefix_tree,
      str::sets,
      str::setter,
      str::str,
      str::strings,
      str::type,
      str::value,
      str::value_to_name,
      str::values,
      str::id,
      str::ids,
      str::descriptor,
      str::descriptors,
      str::key,
      str::keys,
      str::annotation,
      str::annotations,
      str::member,
      str::members
  >;
  using values = ::fatal::sequence<
    type,
    type::get,
    type::getter,
    type::lists,
    type::maps,
    type::name,
    type::name_to_value,
    type::names,
    type::prefix_tree,
    type::sets,
    type::setter,
    type::str,
    type::strings,
    type::type,
    type::value,
    type::value_to_name,
    type::values,
    type::id,
    type::ids,
    type::descriptor,
    type::descriptors,
    type::key,
    type::keys,
    type::annotation,
    type::annotations,
    type::member,
    type::members
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::list<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::get: return "get";
      case type::getter: return "getter";
      case type::lists: return "lists";
      case type::maps: return "maps";
      case type::name: return "name";
      case type::name_to_value: return "name_to_value";
      case type::names: return "names";
      case type::prefix_tree: return "prefix_tree";
      case type::sets: return "sets";
      case type::setter: return "setter";
      case type::str: return "str";
      case type::strings: return "strings";
      case type::type: return "type";
      case type::value: return "value";
      case type::value_to_name: return "value_to_name";
      case type::values: return "values";
      case type::id: return "id";
      case type::ids: return "ids";
      case type::descriptor: return "descriptor";
      case type::descriptors: return "descriptors";
      case type::key: return "key";
      case type::keys: return "keys";
      case type::annotation: return "annotation";
      case type::annotations: return "annotations";
      case type::member: return "member";
      case type::members: return "members";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum_with_special_names_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum_with_special_names_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(958943865626138984ull)
  >
);

}} // test_cpp2::cpp_reflection