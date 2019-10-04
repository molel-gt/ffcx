// This code conforms with the UFC specification version 2018.2.0.dev0
// and was automatically generated by FFC version 2019.2.0.dev0.
//
// This code was generated with the following parameters:
//
//  {'epsilon': 1e-14,
//   'external_include_dirs': '',
//   'external_includes': '',
//   'precision': None,
//   'quadrature_degree': None,
//   'quadrature_rule': None,
//   'representation': 'uflacs',
//   'scalar_type': 'double',
//   'timeout': 10}


#pragma once

typedef double fenics_scalar_t;
#include <fenics_interface.h>

#ifdef __cplusplus
extern "C" {
#endif

fenics_finite_element* create_ffc_element_ee842efaff850c68ef813950918d0afe4f876107_finite_element_main(void);

fenics_finite_element* create_ffc_element_cec102c68e1aeff08ddd95ebe79ff66b7c806f33_finite_element_main(void);

fenics_finite_element* create_ffc_element_d5d593bf7bdd8cdecff9765146b9ea7ef104cb59_finite_element_main(void);

fenics_finite_element* create_ffc_element_33e9a2dec3cd356f6d7d0c0aaa65e32a8b7e7f20_finite_element_main(void);

fenics_finite_element* create_ffc_element_5ca9aa173a4a215c3bd1e99d9aa74f41fa5b4079_finite_element_main(void);

fenics_finite_element* create_ffc_element_65a8345789c58ddd630b7906307bbf7a38b6d1f7_finite_element_main(void);

fenics_dofmap* create_ffc_element_ee842efaff850c68ef813950918d0afe4f876107_dofmap_main(void);

fenics_dofmap* create_ffc_element_cec102c68e1aeff08ddd95ebe79ff66b7c806f33_dofmap_main(void);

fenics_dofmap* create_ffc_element_d5d593bf7bdd8cdecff9765146b9ea7ef104cb59_dofmap_main(void);

fenics_dofmap* create_ffc_element_33e9a2dec3cd356f6d7d0c0aaa65e32a8b7e7f20_dofmap_main(void);

fenics_dofmap* create_ffc_element_5ca9aa173a4a215c3bd1e99d9aa74f41fa5b4079_dofmap_main(void);

fenics_dofmap* create_ffc_element_65a8345789c58ddd630b7906307bbf7a38b6d1f7_dofmap_main(void);

fenics_coordinate_mapping* create_ffc_coordinate_mapping_c1ca6cbb4a958561ea28731f4e91dcb590afbfd5_coordinate_mapping_main(void);

fenics_integral* create_vectorlaplacegradcurl_cell_integral_43661ed4ace3770ee12c74f1d0a7b3267bdbf8c6_otherwise(void);

fenics_integral* create_vectorlaplacegradcurl_cell_integral_8be93e911f7d55be3deda9d5fe504d135698d4f2_otherwise(void);

fenics_form* create_vectorlaplacegradcurl_form_43661ed4ace3770ee12c74f1d0a7b3267bdbf8c6(void);

fenics_form* create_vectorlaplacegradcurl_form_8be93e911f7d55be3deda9d5fe504d135698d4f2(void);


// Typedefs for convenience pointers to functions (factories)
typedef fenics_function_space* (*fenics_function_space_factory_ptr)(void);
typedef fenics_form* (*fenics_form_factory_ptr)(void);

// Coefficient spaces helpers (number: 1)
fenics_function_space* VectorLaplaceGradCurl_coefficientspace_w0_create(void);

// Form function spaces helpers (form 'a')
fenics_function_space* VectorLaplaceGradCurl_form_a_functionspace_0_create(void);

fenics_function_space* VectorLaplaceGradCurl_form_a_functionspace_1_create(void);

/* Coefficient function space typedefs for form "form_a" */
/*   - No form coefficients */
/*    Form helper */
static const fenics_form_factory_ptr VectorLaplaceGradCurl_form_a_create = create_vectorlaplacegradcurl_form_43661ed4ace3770ee12c74f1d0a7b3267bdbf8c6;

/*    Typedefs (function spaces for form_a) */
static const fenics_function_space_factory_ptr VectorLaplaceGradCurl_form_a_testspace_create = VectorLaplaceGradCurl_form_a_functionspace_0_create;
static const fenics_function_space_factory_ptr VectorLaplaceGradCurl_form_a_trialspace_create = VectorLaplaceGradCurl_form_a_functionspace_1_create;


 /* End coefficient typedefs */

// Form function spaces helpers (form 'L')
fenics_function_space* VectorLaplaceGradCurl_form_L_functionspace_0_create(void);

/* Coefficient function space typedefs for form "form_L" */
static const fenics_function_space_factory_ptr VectorLaplaceGradCurl_form_L_functionspace_1_create = VectorLaplaceGradCurl_coefficientspace_w0_create;
/*    Form helper */
static const fenics_form_factory_ptr VectorLaplaceGradCurl_form_L_create = create_vectorlaplacegradcurl_form_8be93e911f7d55be3deda9d5fe504d135698d4f2;

/*    Typedefs (function spaces for form_L) */
static const fenics_function_space_factory_ptr VectorLaplaceGradCurl_form_L_testspace_create = VectorLaplaceGradCurl_form_L_functionspace_0_create;
// static fenics_function_space_factory_ptr VectorLaplaceGradCurl_form_L_coefficientspace_w0_create = VectorLaplaceGradCurl_form_L__functionspace_1_create;

 /* End coefficient typedefs */

/* Start high-level typedefs */
static const fenics_form_factory_ptr VectorLaplaceGradCurl_bilinearform_create = VectorLaplaceGradCurl_form_a_create;
static const fenics_form_factory_ptr VectorLaplaceGradCurl_linearform_create = VectorLaplaceGradCurl_form_L_create;

static const fenics_function_space_factory_ptr VectorLaplaceGradCurl_functionspace_create = VectorLaplaceGradCurl_form_a_functionspace_0_create;
/* End high-level typedefs */


#ifdef __cplusplus
}
#endif
