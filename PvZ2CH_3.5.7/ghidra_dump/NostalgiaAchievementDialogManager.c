// Class: NostalgiaAchievementDialogManager


/* NostalgiaAchievementDialogManager::NostalgiaAchievementDialogManager() */

void __thiscall
NostalgiaAchievementDialogManager::NostalgiaAchievementDialogManager
          (NostalgiaAchievementDialogManager *this)

{
  Sexy::LazySingleton<NostalgiaAchievementDialogManager>::LazySingleton
            ((LazySingleton<NostalgiaAchievementDialogManager> *)this);
  this[8] = (NostalgiaAchievementDialogManager)0x1;
  *(undefined ***)this = &PTR__NostalgiaAchievementDialogManager_0676e910;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialogManager::StartSliding() */

void __thiscall
NostalgiaAchievementDialogManager::StartSliding(NostalgiaAchievementDialogManager *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[8] != (NostalgiaAchievementDialogManager)0x0) &&
     (cVar1 = std::vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>>::
              empty((vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>>
                     *)(this + 0x10)), cVar1 == '\0')) {
    puVar3 = (undefined8 *)FUN_03d6ce4c(*(undefined8 *)(this + 0x10));
    if ((UIWidget *)*puVar3 != (UIWidget *)0x0) {
      UIWidget::SetVisible((UIWidget *)*puVar3,true);
      puVar3 = (undefined8 *)FUN_03d6ce4c(*(undefined8 *)(this + 0x10));
      puVar3 = (undefined8 *)UIWidget::GetPositionOffset((UIWidget *)*puVar3);
      local_20 = *puVar3;
      plVar4 = (long *)FUN_03d6ce4c(*(undefined8 *)(this + 0x10));
      lVar5 = *plVar4;
      iVar2 = FUN_03d6cdc8(*(undefined4 *)(lVar5 + 0x38));
      local_20 = CONCAT44(local_20._4_4_,(float)local_20 + (float)iVar2);
      std::string::string(asStack_18,"");
      std::string::string(asStack_10,"");
      SlidingWidget::SetupSlideInfo
                ((SlidingWidget *)0x3f800000,lVar5,&local_20,asStack_18,asStack_10,3,2);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      puVar3 = (undefined8 *)FUN_03d6ce4c(*(undefined8 *)(this + 0x10));
      SlidingWidget::SlideIn((SlidingWidget *)*puVar3);
      this[8] = (NostalgiaAchievementDialogManager)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NostalgiaAchievementDialogManager::~NostalgiaAchievementDialogManager() */

void __thiscall
NostalgiaAchievementDialogManager::~NostalgiaAchievementDialogManager
          (NostalgiaAchievementDialogManager *this)

{
  *(undefined ***)this = &PTR__NostalgiaAchievementDialogManager_0676e910;
  std::vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>>::~vector
            ((vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>> *)
             (this + 0x10));
  Sexy::LazySingleton<NostalgiaAchievementDialogManager>::~LazySingleton
            ((LazySingleton<NostalgiaAchievementDialogManager> *)this);
  return;
}


/* NostalgiaAchievementDialogManager::~NostalgiaAchievementDialogManager() */

void __thiscall
NostalgiaAchievementDialogManager::~NostalgiaAchievementDialogManager
          (NostalgiaAchievementDialogManager *this)

{
  ~NostalgiaAchievementDialogManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialogManager::StartNext(NostalgiaAchievementDialog*) */

void __thiscall
NostalgiaAchievementDialogManager::StartNext
          (NostalgiaAchievementDialogManager *this,NostalgiaAchievementDialog *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        this[8] = (NostalgiaAchievementDialogManager)0x1;
        StartSliding(this);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((NostalgiaAchievementDialog *)*puVar2 == param_1) break;
      FUN_03d6d3e0((__normal_iterator *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>>::erase
              ((vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>> *)
               this_00,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialogManager::NostalgiaAchievementFinish(PvZ1Achievement const*) */

void __thiscall
NostalgiaAchievementDialogManager::NostalgiaAchievementFinish
          (NostalgiaAchievementDialogManager *this,PvZ1Achievement *param_1)

{
  RtWeakPtr *this_00;
  NostalgiaAchievementDialog *this_01;
  bool bVar1;
  RtObject *pRVar2;
  PvZ1AchievementData *pPVar3;
  long lVar4;
  NostalgiaAchievementDialog *local_20;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UINostalgiaAchievementDialog");
  pRVar2 = (RtObject *)UIWidget::CreateWidget(aRStack_18,0);
  local_20 = Sexy::RtObject::Cast<NostalgiaAchievementDialog>(pRVar2);
  Sexy::RtName::~RtName(aRStack_18);
  if (param_1 != (PvZ1Achievement *)0x0) {
    this_00 = (RtWeakPtr *)(param_1 + 0x20);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar3 = Sexy::RtObject::Cast<PvZ1AchievementData>(pRVar2);
      this_01 = local_20;
      if (pPVar3 != (PvZ1AchievementData *)0x0) {
        pRVar2 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pPVar3 = Sexy::RtObject::Cast<PvZ1AchievementData>(pRVar2);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        NostalgiaAchievementDialog::InitView
                  (this_01,(string *)(pPVar3 + 0x68),(string *)(lVar4 + 0x10));
      }
    }
  }
  std::vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>>::push_back
            ((vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>> *)
             (this + 0x10),&local_20);
  StartSliding(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaAchievementDialogManager::PlantKillZombie(std::string const&, std::string const&) */

void __thiscall
NostalgiaAchievementDialogManager::PlantKillZombie
          (NostalgiaAchievementDialogManager *this,string *param_1,string *param_2)

{
  RtObject *this_00;
  string *extraout_x1;
  string *extraout_x1_00;
  NostalgiaAchievementDialog *local_48;
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UINostalgiaAchievementDialog");
  this_00 = (RtObject *)UIWidget::CreateWidget(aRStack_18,0);
  local_48 = Sexy::RtObject::Cast<NostalgiaAchievementDialog>(this_00);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::StringToUpper((Sexy *)param_1,extraout_x1);
  std::operator+("[",asStack_30);
  std::operator+(asStack_28,"]");
  Sexy::ToWString(asStack_20);
  TodStringTranslate((wstring *)aRStack_18);
  FUN_05476c50(aRStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::string(asStack_20,"-kill-");
  Sexy::ToWString(asStack_20);
  thunk_FUN_05477668(auStack_40,aRStack_18);
  FUN_05476c50(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Sexy::StringToUpper((Sexy *)param_2,extraout_x1_00);
  std::operator+("[ZOMBIE_",asStack_38);
  std::operator+(asStack_30,"]");
  Sexy::ToWString(asStack_28);
  TodStringTranslate((wstring *)asStack_20);
  thunk_FUN_05477668(auStack_40,aRStack_18);
  FUN_05476c50(aRStack_18);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  NostalgiaAchievementDialog::SetDescription((wstring *)local_48);
  std::vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>>::push_back
            ((vector<NostalgiaAchievementDialog*,std::allocator<NostalgiaAchievementDialog*>> *)
             (this + 0x10),&local_48);
  StartSliding(this);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

