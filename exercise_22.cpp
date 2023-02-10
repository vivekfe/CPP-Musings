// types of inheritance

// in case of public inheritance
- Public and protected remains public and protected in derived classes
- protected member functions will be available to class but not the object
- meaning we can directly call protected methods or variables using derived object
- this is applicable to another level of derived classes a->b->c

// In general protected members cannot be directly invoked by the object
-- but rather they should be accessed by methods of the class

// In case of protected inheritance
-- protected and public will become protected in derived classes

// in case of private inheritance

-- public and protected become private, so if create another classes from derived
- public and protected from base class will not be aceesible in second level derived


class circle: private shape, private color
{
private:
  int radius;
public:
  void set()
  {
    shape::set();
    color::set();
    cout << "set circle";
  }
}

// since shape was mentioned eaerlier, so shape's constructor will be called earlier
