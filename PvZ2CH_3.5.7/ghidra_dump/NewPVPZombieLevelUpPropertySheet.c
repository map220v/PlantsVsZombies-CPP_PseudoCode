// Class: NewPVPZombieLevelUpPropertySheet


/* NewPVPZombieLevelUpPropertySheet::~NewPVPZombieLevelUpPropertySheet() */

void __thiscall
NewPVPZombieLevelUpPropertySheet::~NewPVPZombieLevelUpPropertySheet
          (NewPVPZombieLevelUpPropertySheet *this)

{
  std::_Destroy<NewPVPZombieLevelUpData*>
            (*(NewPVPZombieLevelUpData **)this,*(NewPVPZombieLevelUpData **)(this + 8));
  std::_Vector_base<NewPVPZombieLevelUpData,std::allocator<NewPVPZombieLevelUpData>>::~_Vector_base
            ((_Vector_base<NewPVPZombieLevelUpData,std::allocator<NewPVPZombieLevelUpData>> *)this);
  return;
}


/* NewPVPZombieLevelUpPropertySheet::TEMPNAMEPLACEHOLDERVALUE(NewPVPZombieLevelUpPropertySheet
   const&) */

NewPVPZombieLevelUpPropertySheet * __thiscall
NewPVPZombieLevelUpPropertySheet::operator=
          (NewPVPZombieLevelUpPropertySheet *this,NewPVPZombieLevelUpPropertySheet *param_1)

{
  std::vector<NewPVPZombieLevelUpData,std::allocator<NewPVPZombieLevelUpData>>::operator=
            ((vector<NewPVPZombieLevelUpData,std::allocator<NewPVPZombieLevelUpData>> *)this,
             (vector *)param_1);
  return this;
}

