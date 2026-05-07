// Class: ProfileUtils::ChallengeStatusHolder


/* ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder() */

void __thiscall
ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder(ChallengeStatusHolder *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 0x18))
  ;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 0x58))
  ;
  this[0x80] = (ChallengeStatusHolder)0x0;
  this[0x81] = (ChallengeStatusHolder)0x0;
  this[0x82] = (ChallengeStatusHolder)0x0;
  this[0x83] = (ChallengeStatusHolder)0x0;
  return;
}


/* ProfileUtils::ChallengeStatusHolder::~ChallengeStatusHolder() */

void __thiscall
ProfileUtils::ChallengeStatusHolder::~ChallengeStatusHolder(ChallengeStatusHolder *this)

{
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x58));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x40));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x18));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)this);
  return;
}


/* ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder(ProfileUtils::ChallengeStatusHolder&&)
    */

void __thiscall
ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder
          (ChallengeStatusHolder *this,ChallengeStatusHolder *param_1)

{
  ChallengeStatusHolder CVar1;
  ChallengeStatusHolder CVar2;
  ChallengeStatusHolder CVar3;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x40),(vector *)(param_1 + 0x40));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x58),(vector *)(param_1 + 0x58));
  CVar1 = param_1[0x80];
  CVar2 = param_1[0x81];
  CVar3 = param_1[0x82];
  this[0x83] = param_1[0x83];
  this[0x80] = CVar1;
  this[0x81] = CVar2;
  this[0x82] = CVar3;
  return;
}


/* ProfileUtils::ChallengeStatusHolder::TEMPNAMEPLACEHOLDERVALUE(ProfileUtils::ChallengeStatusHolder
   const&) */

ChallengeStatusHolder * __thiscall
ProfileUtils::ChallengeStatusHolder::operator=
          (ChallengeStatusHolder *this,ChallengeStatusHolder *param_1)

{
  ChallengeStatusHolder CVar1;
  ChallengeStatusHolder CVar2;
  ChallengeStatusHolder CVar3;
  
  std::vector<std::wstring,std::allocator<std::wstring>>::operator=
            ((vector<std::wstring,std::allocator<std::wstring>> *)this,(vector *)param_1);
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x40),(vector *)(param_1 + 0x40));
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)(this + 0x58),(vector *)(param_1 + 0x58));
  CVar1 = param_1[0x80];
  CVar2 = param_1[0x81];
  CVar3 = param_1[0x82];
  this[0x83] = param_1[0x83];
  this[0x80] = CVar1;
  this[0x81] = CVar2;
  this[0x82] = CVar3;
  return this;
}

