// Class: CustomChallengeEvilDave


/* CustomChallengeEvilDave::~CustomChallengeEvilDave() */

void __thiscall CustomChallengeEvilDave::~CustomChallengeEvilDave(CustomChallengeEvilDave *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>>::~vector
            ((vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>> *)(this + 8));
  return;
}


/* CustomChallengeEvilDave::CustomChallengeEvilDave(CustomChallengeEvilDave const&) */

void __thiscall
CustomChallengeEvilDave::CustomChallengeEvilDave
          (CustomChallengeEvilDave *this,CustomChallengeEvilDave *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>>::vector
            ((vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}


/* CustomChallengeEvilDave::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeEvilDave const&) */

CustomChallengeEvilDave * __thiscall
CustomChallengeEvilDave::operator=(CustomChallengeEvilDave *this,CustomChallengeEvilDave *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>>::operator=
            ((vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return this;
}


/* CustomChallengeEvilDave::CustomChallengeEvilDave() */

void __thiscall CustomChallengeEvilDave::CustomChallengeEvilDave(CustomChallengeEvilDave *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),8);
  return;
}


/* CustomChallengeEvilDave::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeEvilDave&&) */

CustomChallengeEvilDave * __thiscall
CustomChallengeEvilDave::operator=(CustomChallengeEvilDave *this,CustomChallengeEvilDave *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>>::operator=
            ((vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return this;
}


/* CustomChallengeEvilDave::CustomChallengeEvilDave(CustomChallengeEvilDave&&) */

void __thiscall
CustomChallengeEvilDave::CustomChallengeEvilDave
          (CustomChallengeEvilDave *this,CustomChallengeEvilDave *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}

