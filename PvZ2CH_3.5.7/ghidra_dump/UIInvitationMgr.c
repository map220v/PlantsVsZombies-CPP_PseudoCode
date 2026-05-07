// Class: UIInvitationMgr


/* UIInvitationMgr::UIInvitationMgr() */

void __thiscall UIInvitationMgr::UIInvitationMgr(UIInvitationMgr *this)

{
  Sexy::LazySingleton<UIInvitationMgr>::LazySingleton((LazySingleton<UIInvitationMgr> *)this);
  *(undefined ***)this = &PTR__UIInvitationMgr_06865da0;
  InvitationData::InvitationData((InvitationData *)(this + 8));
  return;
}


/* UIInvitationMgr::~UIInvitationMgr() */

void __thiscall UIInvitationMgr::~UIInvitationMgr(UIInvitationMgr *this)

{
  *(undefined ***)this = &PTR__UIInvitationMgr_06865da0;
  InvitationData::~InvitationData((InvitationData *)(this + 8));
  Sexy::LazySingleton<UIInvitationMgr>::~LazySingleton((LazySingleton<UIInvitationMgr> *)this);
  return;
}


/* UIInvitationMgr::~UIInvitationMgr() */

void __thiscall UIInvitationMgr::~UIInvitationMgr(UIInvitationMgr *this)

{
  ~UIInvitationMgr(this);
  AK::FreeHook(this);
  return;
}


/* UIInvitationMgr::RequestNetwork() */

void UIInvitationMgr::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a74,true,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationMgr::SetNotice() */

void __thiscall UIInvitationMgr::SetNotice(UIInvitationMgr *this)

{
  int iVar1;
  UIInvitationMgr UVar2;
  InvitationTask *pIVar3;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  char local_2c;
  int local_28;
  long local_8;
  
  UVar2 = this[0x28];
  local_8 = ___stack_chk_guard;
  if ((UVar2 == (UIInvitationMgr)0x0) || (this[0x2a] != (UIInvitationMgr)0x0)) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x60));
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x60));
    while (UVar2 = (UIInvitationMgr)
                   __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
          (bool)UVar2) {
      pIVar3 = (InvitationTask *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      InvitationTask::InvitationTask((InvitationTask *)&local_30,pIVar3);
      if (local_28 == 2) {
        iVar1 = *(int *)(this + 0x78);
joined_r0x04e6d31c:
        if (local_30 <= iVar1) {
LAB_04e6d2d4:
          if (local_2c == '\0') {
            PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
                      ((PennyGiftBoxRankPriviewItemData *)&local_30);
            break;
          }
        }
      }
      else {
        if (local_28 == 3) {
          iVar1 = *(int *)(this + 0x7c);
          goto joined_r0x04e6d31c;
        }
        if (local_28 == 1) goto LAB_04e6d2d4;
      }
      PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
                ((PennyGiftBoxRankPriviewItemData *)&local_30);
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(UVar2);
}


/* UIInvitationMgr::LoadData(InvitationData const&) */

void __thiscall UIInvitationMgr::LoadData(UIInvitationMgr *this,InvitationData *param_1)

{
  InvitationData::operator=((InvitationData *)(this + 8),param_1);
  return;
}

