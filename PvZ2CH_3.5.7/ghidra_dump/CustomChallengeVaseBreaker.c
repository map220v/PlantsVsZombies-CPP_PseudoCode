// Class: CustomChallengeVaseBreaker


/* CustomChallengeVaseBreaker::~CustomChallengeVaseBreaker() */

void __thiscall
CustomChallengeVaseBreaker::~CustomChallengeVaseBreaker(CustomChallengeVaseBreaker *this)

{
  std::vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>>::~vector
            ((vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>> *)(this + 8));
  return;
}


/* CustomChallengeVaseBreaker::CustomChallengeVaseBreaker(CustomChallengeVaseBreaker const&) */

void __thiscall
CustomChallengeVaseBreaker::CustomChallengeVaseBreaker
          (CustomChallengeVaseBreaker *this,CustomChallengeVaseBreaker *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>>::vector
            ((vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* CustomChallengeVaseBreaker::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeVaseBreaker const&) */

CustomChallengeVaseBreaker * __thiscall
CustomChallengeVaseBreaker::operator=
          (CustomChallengeVaseBreaker *this,CustomChallengeVaseBreaker *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>>::operator=
            ((vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


/* CustomChallengeVaseBreaker::CustomChallengeVaseBreaker() */

void __thiscall
CustomChallengeVaseBreaker::CustomChallengeVaseBreaker(CustomChallengeVaseBreaker *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>>::resize
            ((vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>> *)(this + 8),8);
  return;
}


/* CustomChallengeVaseBreaker::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeVaseBreaker&&) */

CustomChallengeVaseBreaker * __thiscall
CustomChallengeVaseBreaker::operator=
          (CustomChallengeVaseBreaker *this,CustomChallengeVaseBreaker *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>>::operator=
            ((vector<VaseBreakerVaseEntry,std::allocator<VaseBreakerVaseEntry>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

