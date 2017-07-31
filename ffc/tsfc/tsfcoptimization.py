def optimize_integral_ir(ir, parameters):
    ir = ir.copy()
    integral_data, form_data, prefix, parameters = ir["compile_integral"]
    parameters = parameters.copy()
    parameters["mode"] = "coffee"  # default optimization mode
    ir["compile_integral"] = (integral_data, form_data, prefix, parameters)
    return ir
