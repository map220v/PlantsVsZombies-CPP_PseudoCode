// Class: Sexy::AndroidGL20RenderEffect::ParamData


/* Sexy::AndroidGL20RenderEffect::ParamData::~ParamData() */

void __thiscall Sexy::AndroidGL20RenderEffect::ParamData::~ParamData(ParamData *this)

{
  FUN_031db400(*(undefined8 *)this);
  return;
}


/* Sexy::AndroidGL20RenderEffect::ParamData::TEMPNAMEPLACEHOLDERVALUE(Sexy::AndroidGL20RenderEffect::ParamData&&)
    */

ParamData * __thiscall
Sexy::AndroidGL20RenderEffect::ParamData::operator=(ParamData *this,ParamData *param_1)

{
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)this,(vector *)param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::ParamData::SetValue(float const*, unsigned int) */

void __thiscall
Sexy::AndroidGL20RenderEffect::ParamData::SetValue(ParamData *this,float *param_1,uint param_2)

{
  void *__dest;
  ulong uVar1;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)this,(ulong)param_2);
  __dest = (void *)FUN_052da5b8(*(undefined8 *)this);
  memcpy(__dest,param_1,(ulong)param_2 << 2);
  while (uVar1 = FUN_052d9a48(*(undefined8 *)this,*(undefined8 *)(this + 8)), (uVar1 & 3) != 0) {
    local_c = 0.0;
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)this,&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

