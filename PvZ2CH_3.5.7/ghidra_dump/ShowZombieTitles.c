// Class: ShowZombieTitles


/* ShowZombieTitles::ShowZombieTitles(ShowZombieTitles&&) */

void __thiscall ShowZombieTitles::ShowZombieTitles(ShowZombieTitles *this,ShowZombieTitles *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


/* ShowZombieTitles::~ShowZombieTitles() */

void __thiscall ShowZombieTitles::~ShowZombieTitles(ShowZombieTitles *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}


/* ShowZombieTitles::ShowZombieTitles(ShowZombieTitles const&) */

void __thiscall ShowZombieTitles::ShowZombieTitles(ShowZombieTitles *this,ShowZombieTitles *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}


/* ShowZombieTitles::TEMPNAMEPLACEHOLDERVALUE(ShowZombieTitles const&) */

ShowZombieTitles * __thiscall
ShowZombieTitles::operator=(ShowZombieTitles *this,ShowZombieTitles *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}

