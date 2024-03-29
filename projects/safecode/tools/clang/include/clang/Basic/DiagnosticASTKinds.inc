#ifdef ASTSTART
__ASTSTART = DIAG_START_AST,
#undef ASTSTART
#endif

DIAG(err_asm_empty_symbolic_operand_name, CLASS_ERROR, diag::MAP_ERROR, "empty symbolic operand name in inline assembly string", 0, true, false, false, false, 11)
DIAG(err_asm_invalid_escape, CLASS_ERROR, diag::MAP_ERROR, "invalid %% escape in inline assembly string", 0, true, false, false, false, 11)
DIAG(err_asm_invalid_operand_number, CLASS_ERROR, diag::MAP_ERROR, "invalid operand number in inline asm string", 0, true, false, false, false, 11)
DIAG(err_asm_unknown_symbolic_operand_name, CLASS_ERROR, diag::MAP_ERROR, "unknown symbolic operand name in inline assembly string", 0, true, false, false, false, 11)
DIAG(err_asm_unterminated_symbolic_operand_name, CLASS_ERROR, diag::MAP_ERROR, "unterminated symbolic operand name in inline assembly string", 0, true, false, false, false, 11)
DIAG(err_odr_different_num_template_parameters, CLASS_ERROR, diag::MAP_ERROR, "template parameter lists have a different number of parameters (%0 vs %1)", 0, true, false, false, false, 0)
DIAG(err_odr_different_template_parameter_kind, CLASS_ERROR, diag::MAP_ERROR, "template parameter has different kinds in different translation units", 0, true, false, false, false, 0)
DIAG(err_odr_field_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "field %0 declared with incompatible types in different translation units (%1 vs. %2)", 0, true, false, false, false, 0)
DIAG(err_odr_function_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "external function %0 declared with incompatible types in different translation units (%1 vs. %2)", 0, true, false, false, false, 0)
DIAG(err_odr_ivar_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "instance variable %0 declared with incompatible types in different translation units (%1 vs. %2)", 0, true, false, false, false, 0)
DIAG(err_odr_non_type_parameter_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "non-type template parameter declared with incompatible types in different translation units (%0 vs. %1)", 0, true, false, false, false, 0)
DIAG(err_odr_objc_method_num_params_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "%select{class|instance}0 method %1 has a different number of parameters in different translation units (%2 vs. %3)", 0, true, false, false, false, 0)
DIAG(err_odr_objc_method_param_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "%select{class|instance}0 method %1 has a parameter with a different types in different translation units (%2 vs. %3)", 0, true, false, false, false, 0)
DIAG(err_odr_objc_method_result_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "%select{class|instance}0 method %1 has incompatible result types in different translation units (%2 vs. %3)", 0, true, false, false, false, 0)
DIAG(err_odr_objc_method_variadic_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "%select{class|instance}0 method %1 is variadic in one translation unit and not variadic in another", 0, true, false, false, false, 0)
DIAG(err_odr_objc_property_impl_kind_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "property %0 is implemented with %select{@synthesize|@dynamic}1 in one translation but %select{@dynamic|@synthesize}1 in another translation unit", 0, true, false, false, false, 0)
DIAG(err_odr_objc_property_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "property %0 declared with incompatible types in different translation units (%1 vs. %2)", 0, true, false, false, false, 0)
DIAG(err_odr_objc_superclass_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "class %0 has incompatible superclasses", 0, true, false, false, false, 0)
DIAG(err_odr_objc_synthesize_ivar_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "property %0 is synthesized to different ivars in different translation units (%1 vs. %2)", 0, true, false, false, false, 0)
DIAG(err_odr_parameter_pack_non_pack, CLASS_ERROR, diag::MAP_ERROR, "parameter kind mismatch; parameter is %select{not a|a}0 parameter pack", 0, true, false, false, false, 0)
DIAG(err_odr_variable_multiple_def, CLASS_ERROR, diag::MAP_ERROR, "external variable %0 defined in multiple translation units", 0, true, false, false, false, 0)
DIAG(err_odr_variable_type_inconsistent, CLASS_ERROR, diag::MAP_ERROR, "external variable %0 declared with incompatible types in different translation units (%1 vs. %2)", 0, true, false, false, false, 0)
DIAG(err_unsupported_ast_node, CLASS_ERROR, diag::MAP_ERROR, "cannot import unsupported AST node %0", 0, true, false, false, false, 0)
DIAG(note_constexpr_array_index, CLASS_NOTE, diag::MAP_FATAL, "cannot refer to element %0 of %select{array of %2 elements|non-array object}1 in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_call_here, CLASS_NOTE, diag::MAP_FATAL, "in call to '%0'", 0, true, false, false, false, 0)
DIAG(note_constexpr_call_limit_exceeded, CLASS_NOTE, diag::MAP_FATAL, "constexpr evaluation hit maximum call limit", 0, true, false, false, false, 0)
DIAG(note_constexpr_calls_suppressed, CLASS_NOTE, diag::MAP_FATAL, "(skipping %0 call%s0 in backtrace; use -fconstexpr-backtrace-limit=0 to see all)", 0, true, false, false, false, 0)
DIAG(note_constexpr_compare_virtual_mem_ptr, CLASS_NOTE, diag::MAP_FATAL, "comparison of pointer to virtual member function %0 has unspecified value", 0, true, false, false, false, 0)
DIAG(note_constexpr_conditional_never_const, CLASS_NOTE, diag::MAP_FATAL, "both arms of conditional operator are unable to produce a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_depth_limit_exceeded, CLASS_NOTE, diag::MAP_FATAL, "constexpr evaluation exceeded maximum depth of %0 calls", 0, true, false, false, false, 0)
DIAG(note_constexpr_float_arithmetic, CLASS_NOTE, diag::MAP_FATAL, "floating point arithmetic produces %select{an infinity|a NaN}0", 0, true, false, false, false, 0)
DIAG(note_constexpr_invalid_cast, CLASS_NOTE, diag::MAP_FATAL, "%select{reinterpret_cast|dynamic_cast|cast which performs the conversions of a reinterpret_cast|cast from %1}0 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_invalid_downcast, CLASS_NOTE, diag::MAP_FATAL, "cannot cast object of dynamic type %0 to type %1", 0, true, false, false, false, 0)
DIAG(note_constexpr_invalid_function, CLASS_NOTE, diag::MAP_FATAL, "%select{non-constexpr|undefined}0 %select{function|constructor}1 %2 cannot be used in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_large_shift, CLASS_NOTE, diag::MAP_FATAL, "shift count %0 >= width of type %1 (%2 bit%s2)", 0, true, false, false, false, 0)
DIAG(note_constexpr_lifetime_ended, CLASS_NOTE, diag::MAP_FATAL, "read of %select{temporary|variable}0 whose lifetime has ended", 0, true, false, false, false, 0)
DIAG(note_constexpr_lshift_discards, CLASS_NOTE, diag::MAP_FATAL, "signed left shift discards bits", 0, true, false, false, false, 0)
DIAG(note_constexpr_lshift_of_negative, CLASS_NOTE, diag::MAP_FATAL, "left shift of negative value %0", 0, true, false, false, false, 0)
DIAG(note_constexpr_ltor_mutable, CLASS_NOTE, diag::MAP_FATAL, "read of mutable member %0 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_ltor_non_const_int, CLASS_NOTE, diag::MAP_FATAL, "read of non-const variable %0 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_ltor_non_constexpr, CLASS_NOTE, diag::MAP_FATAL, "read of non-constexpr variable %0 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_ltor_volatile_obj, CLASS_NOTE, diag::MAP_FATAL, "read of volatile %select{temporary|object %1|member %1}0 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_ltor_volatile_type, CLASS_NOTE, diag::MAP_FATAL, "read of volatile-qualified type %0 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_negative_shift, CLASS_NOTE, diag::MAP_FATAL, "negative shift count %0", 0, true, false, false, false, 0)
DIAG(note_constexpr_non_global, CLASS_NOTE, diag::MAP_FATAL, "%select{pointer|reference}0 to %select{|subobject of }1%select{temporary|%3}2 is not a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_nonliteral, CLASS_NOTE, diag::MAP_FATAL, "non-literal type %0 cannot be used in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_null_subobject, CLASS_NOTE, diag::MAP_FATAL, "cannot %select{access base class of|access derived class of|access field of|access array element of|perform pointer arithmetic on|call member function on|access real component of|access imaginary component of}0 null pointer", 0, true, false, false, false, 0)
DIAG(note_constexpr_overflow, CLASS_NOTE, diag::MAP_FATAL, "value %0 is outside the range of representable values of type %1", 0, true, false, false, false, 0)
DIAG(note_constexpr_past_end, CLASS_NOTE, diag::MAP_FATAL, "dereferenced pointer past the end of %select{|subobject of }0%select{temporary|%2}1 is not a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_past_end_subobject, CLASS_NOTE, diag::MAP_FATAL, "cannot %select{access base class of|access derived class of|access field of|access array element of|ERROR|call member function on|access real component of|access imaginary component of}0 pointer past the end of object", 0, true, false, false, false, 0)
DIAG(note_constexpr_pointer_comparison_base_classes, CLASS_NOTE, diag::MAP_FATAL, "comparison of addresses of subobjects of different base classes has unspecified value", 0, true, false, false, false, 0)
DIAG(note_constexpr_pointer_comparison_base_field, CLASS_NOTE, diag::MAP_FATAL, "comparison of address of base class subobject %0 of class %1 to field %2 has unspecified value", 0, true, false, false, false, 0)
DIAG(note_constexpr_pointer_comparison_differing_access, CLASS_NOTE, diag::MAP_FATAL, "comparison of address of fields %0 and %2 of %4 with differing access specifiers (%1 vs %3) has unspecified value", 0, true, false, false, false, 0)
DIAG(note_constexpr_pointer_subtraction_not_same_array, CLASS_NOTE, diag::MAP_FATAL, "subtracted pointers are not elements of the same array", 0, true, false, false, false, 0)
DIAG(note_constexpr_read_inactive_union_member, CLASS_NOTE, diag::MAP_FATAL, "read of member %0 of union with %select{active member %2|no active member}1 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_read_past_end, CLASS_NOTE, diag::MAP_FATAL, "read of dereferenced one-past-the-end pointer is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_read_uninit, CLASS_NOTE, diag::MAP_FATAL, "read of uninitialized object is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_temporary_here, CLASS_NOTE, diag::MAP_FATAL, "temporary created here", 0, true, false, false, false, 0)
DIAG(note_constexpr_typeid_polymorphic, CLASS_NOTE, diag::MAP_FATAL, "typeid applied to expression of polymorphic type %0 is not allowed in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_var_init_non_constant, CLASS_NOTE, diag::MAP_FATAL, "initializer of %0 is not a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_virtual_base, CLASS_NOTE, diag::MAP_FATAL, "cannot construct object of type %0 with virtual base class in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_virtual_call, CLASS_NOTE, diag::MAP_FATAL, "cannot evaluate virtual function call in a constant expression", 0, true, false, false, false, 0)
DIAG(note_constexpr_void_comparison, CLASS_NOTE, diag::MAP_FATAL, "comparison between unequal pointers to void has unspecified result", 0, true, false, false, false, 0)
DIAG(note_expr_divide_by_zero, CLASS_NOTE, diag::MAP_FATAL, "division by zero", 0, true, false, false, false, 0)
DIAG(note_odr_base, CLASS_NOTE, diag::MAP_FATAL, "class has base type %0", 0, true, false, false, false, 0)
DIAG(note_odr_bit_field, CLASS_NOTE, diag::MAP_FATAL, "bit-field %0 with type %1 and length %2 here", 0, true, false, false, false, 0)
DIAG(note_odr_defined_here, CLASS_NOTE, diag::MAP_FATAL, "also defined here", 0, true, false, false, false, 0)
DIAG(note_odr_enumerator, CLASS_NOTE, diag::MAP_FATAL, "enumerator %0 with value %1 here", 0, true, false, false, false, 0)
DIAG(note_odr_field, CLASS_NOTE, diag::MAP_FATAL, "field %0 has type %1 here", 0, true, false, false, false, 0)
DIAG(note_odr_missing_base, CLASS_NOTE, diag::MAP_FATAL, "no corresponding base class here", 0, true, false, false, false, 0)
DIAG(note_odr_missing_enumerator, CLASS_NOTE, diag::MAP_FATAL, "no corresponding enumerator here", 0, true, false, false, false, 0)
DIAG(note_odr_missing_field, CLASS_NOTE, diag::MAP_FATAL, "no corresponding field here", 0, true, false, false, false, 0)
DIAG(note_odr_not_bit_field, CLASS_NOTE, diag::MAP_FATAL, "field %0 is not a bit-field", 0, true, false, false, false, 0)
DIAG(note_odr_number_of_bases, CLASS_NOTE, diag::MAP_FATAL, "class has %0 base %plural{1:class|:classes}0", 0, true, false, false, false, 0)
DIAG(note_odr_objc_method_here, CLASS_NOTE, diag::MAP_FATAL, "%select{class|instance}0 method %1 also declared here", 0, true, false, false, false, 0)
DIAG(note_odr_objc_missing_superclass, CLASS_NOTE, diag::MAP_FATAL, "no corresponding superclass here", 0, true, false, false, false, 0)
DIAG(note_odr_objc_property_impl_kind, CLASS_NOTE, diag::MAP_FATAL, "property %0 is implemented with %select{@synthesize|@dynamic}1 here", 0, true, false, false, false, 0)
DIAG(note_odr_objc_superclass, CLASS_NOTE, diag::MAP_FATAL, "inherits from superclass %0 here", 0, true, false, false, false, 0)
DIAG(note_odr_objc_synthesize_ivar_here, CLASS_NOTE, diag::MAP_FATAL, "property is synthesized to ivar %0 here", 0, true, false, false, false, 0)
DIAG(note_odr_parameter_pack_non_pack, CLASS_NOTE, diag::MAP_FATAL, "%select{parameter|parameter pack}0 declared here", 0, true, false, false, false, 0)
DIAG(note_odr_tag_kind_here, CLASS_NOTE, diag::MAP_FATAL, "%0 is a %select{struct|interface|union|class|enum}1 here", 0, true, false, false, false, 0)
DIAG(note_odr_template_parameter_here, CLASS_NOTE, diag::MAP_FATAL, "template parameter declared here", 0, true, false, false, false, 0)
DIAG(note_odr_template_parameter_list, CLASS_NOTE, diag::MAP_FATAL, "template parameter list also declared here", 0, true, false, false, false, 0)
DIAG(note_odr_value_here, CLASS_NOTE, diag::MAP_FATAL, "declared here with type %0", 0, true, false, false, false, 0)
DIAG(note_odr_virtual_base, CLASS_NOTE, diag::MAP_FATAL, "%select{non-virtual|virtual}0 derivation here", 0, true, false, false, false, 0)
DIAG(warn_odr_tag_type_inconsistent, CLASS_WARNING, diag::MAP_WARNING, "type %0 has incompatible definitions in different translation units", 0, true, false, false, false, 0)
