
finite_element_combined = """\
/// This class defines the interface for a finite element.

class %(classname)s: public ufc::finite_element
{
%(members)s

public:

  /// Constructor
  %(classname)s()
  {
%(constructor)s
  }

  /// Destructor
  ~%(classname)s()
  {
%(destructor)s
  }

  /// Return a string identifying the finite element
  const char* signature() const
  {
%(signature)s
  }

  /// Return the cell shape
  ufc::shape cell_shape() const
  {
%(cell_shape)s
  }

  /// Return the dimension of the finite element function space
  unsigned int space_dimension() const
  {
%(space_dimension)s
  }

  /// Return the rank of the value space
  unsigned int value_rank() const
  {
%(value_rank)s
  }

  /// Return the dimension of the value space for axis i
  unsigned int value_dimension(unsigned int i) const
  {
%(value_dimension)s
  }

  /// Evaluate basis function i in cell at the point
  /// x = (coordinates[0], coordinates1], ...)
  void evaluate_basis(double* values,
                      const double* coordinates,
                      unsigned int i,
                      const ufc::cell& c) const
  {
%(evaluate_basis)s
  }

  /// Evaluate linear functional for dof i on the function f
  double evaluate_dof(unsigned int i,
                      const ufc::function& f,
                      const ufc::cell& c) const
  {
%(evaluate_dof)s
  }

  /// Interpolate vertex values from dof values
  void interpolate_vertex_values(double* vertex_values,
                                 const double* dof_values) const
  {
%(interpolate_vertex_values)s
  }

  /// Return the number of sub elements (for a mixed finite element)
  unsigned int num_sub_elements(unsigned int i) const
  {
%(num_sub_elements)s
  }

  /// Return sub element i (for a mixed finite element)
  const ufc::finite_element& sub_element(unsigned int i) const
  {
%(sub_element)s
  }

};
"""


finite_element_header = """\
/// This class defines the interface for a finite element.

class %(classname)s: public ufc::finite_element
{
%(members)s

public:

  /// Constructor
  %(classname)s();

  /// Destructor
  ~%(classname)s();

  /// Return a string identifying the finite element
  const char* signature() const;

  /// Return the cell shape
  ufc::shape cell_shape() const;

  /// Return the dimension of the finite element function space
  unsigned int space_dimension() const;

  /// Return the rank of the value space
  unsigned int value_rank() const;

  /// Return the dimension of the value space for axis i
  unsigned int value_dimension(unsigned int i) const;

  /// Evaluate basis function i in cell at the point
  /// x = (coordinates[0], coordinates1], ...)
  void evaluate_basis(double* values,
                      const double* coordinates,
                      unsigned int i,
                      const ufc::cell& c) const;

  /// Evaluate linear functional for dof i on the function f
  double evaluate_dof(unsigned int i,
                      const ufc::function& f,
                      const ufc::cell& c) const;

  /// Interpolate vertex values from dof values
  void interpolate_vertex_values(double* vertex_values,
                                 const double* dof_values) const;

  /// Return the number of sub elements (for a mixed finite element)
  unsigned int num_sub_elements(unsigned int i) const;

  /// Return sub element i (for a mixed finite element)
  const ufc::finite_element& sub_element(unsigned int i) const;

};
"""


finite_element_implementation= """\

/// Constructor
%(classname)s::%(classname)s()
{
%(constructor)s
}

/// Destructor
%(classname)s::~%(classname)s()
{
%(destructor)s
}

/// Return a string identifying the finite element
const char* %(classname)s::signature() const
{
%(signature)s
}

/// Return the cell shape
ufc::shape %(classname)s::cell_shape() const
{
%(cell_shape)s
}

/// Return the dimension of the finite element function space
unsigned int %(classname)s::space_dimension() const
{
%(space_dimension)s
}

/// Return the rank of the value space
unsigned int %(classname)s::value_rank() const
{
%(value_rank)s
}

/// Return the dimension of the value space for axis i
unsigned int %(classname)s::value_dimension(unsigned int i) const
{
%(value_dimension)s
}

/// Evaluate basis function i in cell at the point
/// x = (coordinates[0], coordinates1], ...)
void %(classname)s::evaluate_basis(double* values,
                                   const double* coordinates,
                                   unsigned int i,
                                   const ufc::cell& c) const
{
%(evaluate_basis)s
}

/// Evaluate linear functional for dof i on the function f
double %(classname)s::evaluate_dof(unsigned int i,
                    const ufc::function& f,
                    const ufc::cell& c) const
{
%(evaluate_dof)s
}

/// Interpolate vertex values from dof values
void %(classname)s::interpolate_vertex_values(double* vertex_values,
                               const double* dof_values) const
{
%(interpolate_vertex_values)s
}

/// Return the number of sub elements (for a mixed finite element)
unsigned int %(classname)s::num_sub_elements(unsigned int i) const
{
%(num_sub_elements)s
}

/// Return sub element i (for a mixed finite element)
const ufc::finite_element& %(classname)s::sub_element(unsigned int i) const
{
%(sub_element)s
}
"""
