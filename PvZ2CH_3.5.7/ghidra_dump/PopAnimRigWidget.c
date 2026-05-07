// Class: PopAnimRigWidget


/* PopAnimRigWidget::GetAnimRig(int) */

undefined8 __thiscall PopAnimRigWidget::GetAnimRig(PopAnimRigWidget *this,int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_049c7444(*(undefined8 *)(this + 0xd8),(long)param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopAnimRigWidget::Update() */

void __thiscall PopAnimRigWidget::Update(PopAnimRigWidget *this)

{
  bool bVar1;
  undefined8 *puVar2;
  PopAnimRig *this_00;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xd8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (PopAnimRig *)*puVar2;
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopAnimRigWidget::Draw(Sexy::Graphics*) */

void __thiscall PopAnimRigWidget::Draw(PopAnimRigWidget *this,Graphics *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  GraphicsAutoState aGStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0x48),*(int *)(this + 0x4c));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xd8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    PopAnimRig::Draw((PopAnimRig *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopAnimRigWidget::~PopAnimRigWidget() */

void __thiscall PopAnimRigWidget::~PopAnimRigWidget(PopAnimRigWidget *this)

{
  bool bVar1;
  undefined8 *puVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_06926de0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x48))((long *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::~vector
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)this_00);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PopAnimRigWidget::~PopAnimRigWidget() */

void __thiscall PopAnimRigWidget::~PopAnimRigWidget(PopAnimRigWidget *this)

{
  ~PopAnimRigWidget(this);
  AK::FreeHook(this);
  return;
}


/* PopAnimRigWidget::AddRig(PopAnimRig*) */

void __thiscall PopAnimRigWidget::AddRig(PopAnimRigWidget *this,PopAnimRig *param_1)

{
  PopAnimRig *local_8;
  
  local_8 = param_1;
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0xd8),&local_8);
  return;
}


/* PopAnimRigWidget::PopAnimRigWidget(Sexy::TRect<int> const&, PopAnimRig*) */

void __thiscall
PopAnimRigWidget::PopAnimRigWidget(PopAnimRigWidget *this,TRect *param_1,PopAnimRig *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06926de0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  Sexy::WidgetContainer::SetIgnoreMouseInput((WidgetContainer *)this,true);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  if (param_2 != (PopAnimRig *)0x0) {
    AddRig(this,param_2);
    return;
  }
  return;
}

