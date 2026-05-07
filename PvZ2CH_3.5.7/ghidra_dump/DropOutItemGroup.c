// Class: DropOutItemGroup


/* DropOutItemGroup::~DropOutItemGroup() */

void __thiscall DropOutItemGroup::~DropOutItemGroup(DropOutItemGroup *this)

{
  std::vector<DropOutItemData,std::allocator<DropOutItemData>>::~vector
            ((vector<DropOutItemData,std::allocator<DropOutItemData>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropOutItemGroup::CheckItemCanDrop(std::string const&) */

void DropOutItemGroup::CheckItemCanDrop(string *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  string *psVar5;
  RtObject *this;
  long extraout_x0;
  PlayerInfo *this_00;
  long lVar6;
  string *psVar7;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtMixedPtr<Sexy::Image> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
  ObjectTypeDirectory<PresentType>::GetTypeFromTypeName(psVar5);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar2) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    bVar2 = Sexy::RtObject::IsA<PresentTypeDropPiece>(this);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      nop();
      psVar5 = (string *)(extraout_x0 + 0x30);
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      cVar3 = PlayerInfo::GetIsPlantUnlocked(this_00,psVar5);
      if (cVar3 == '\0') {
        std::string::string(asStack_20,"iOS PvZ2 Plant Store");
        psVar7 = asStack_38;
        std::string::string(asStack_18,"Plant Pieces");
        std::string::string(asStack_10,"plant");
        Magento::FindStoreProduct((Magento *)asStack_20,asStack_18,asStack_10,psVar5,psVar7);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_20);
        nop();
        cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_28);
        bVar2 = false;
        if (cVar3 == '\0') {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          iVar1 = *(int *)(lVar6 + 0x90);
          iVar4 = PlayerInfo::GetPlantPieceCount(this_00,psVar5,true);
          bVar2 = *(int *)(extraout_x0 + 0x38) <= iVar1 - iVar4;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
      }
      else {
        bVar2 = false;
      }
      goto LAB_04521640;
    }
  }
  bVar2 = true;
LAB_04521640:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropOutItemGroup::RandGetDropItem() */

void DropOutItemGroup::RandGetDropItem(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  string *in_x0;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_20;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 8);
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    uVar7 = (uint)bVar1;
    if (!bVar1) break;
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    iVar3 = iVar3 + (uint)*(ushort *)(lVar5 + 8);
    FUN_0451f088((exception_ptr *)&local_20);
  }
  uVar4 = time((time_t *)0x0);
  Sexy::SRand(uVar4);
  iVar3 = Sexy::Rand(iVar3);
  std::string::string(asStack_18,"");
  nop();
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_045218e4:
      std::string::string((string *)&local_10,"gold_1000");
      nop();
      cVar2 = CheckItemCanDrop(in_x0);
      if (cVar2 == '\0') {
        uVar6 = FUN_0547429c((string *)&local_10);
        Sexy::OutputDebugStrF((wchar_t *)"dump drop replace(%s)",uVar6);
        FUN_05474148();
      }
      else {
        uVar6 = FUN_0547429c(asStack_18);
        Sexy::OutputDebugStrF((wchar_t *)"dump drop (%s)",uVar6);
        FUN_05474148();
      }
      std::string::~string((string *)&local_10);
      std::string::~string(asStack_18);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    uVar7 = uVar7 + *(ushort *)(lVar5 + 8);
    if (iVar3 < (int)uVar7) {
      thunk_FUN_05475e00(asStack_18,lVar5);
      goto LAB_045218e4;
    }
    FUN_0451f088((exception_ptr *)&local_20);
  } while( true );
}

