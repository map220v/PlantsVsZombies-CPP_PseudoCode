// Class: PFrame


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PFrame::StaticClassInit() */

void PFrame::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PFrame");
    (*pcVar2)(plVar1,asStack_10,FUN_04abbbec,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PFrame::StaticGetClass() */

long * PFrame::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PFrame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PFrame::GetClass() const */

long * PFrame::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PFrame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PFrame::DoTriggers() */

void __thiscall PFrame::DoTriggers(PFrame *this)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x48))();
    }
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
/* PFrame::ClearTriggers() */

void __thiscall PFrame::ClearTriggers(PFrame *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<PTrigger*,std::allocator<PTrigger*>>::clear
            ((vector<PTrigger*,std::allocator<PTrigger*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PFrame::PFrame() */

void __thiscall PFrame::PFrame(PFrame *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06948db0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PFrame::StaticNew() */

PFrame * PFrame::StaticNew(void)

{
  PFrame *this;
  
  this = ::operator_new(0x28);
  PFrame(this);
  return this;
}


/* PFrame::~PFrame() */

void __thiscall PFrame::~PFrame(PFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_06948db0;
  std::vector<PTrigger*,std::allocator<PTrigger*>>::~vector
            ((vector<PTrigger*,std::allocator<PTrigger*>> *)(this + 0x10));
  nop();
  return;
}


/* PFrame::~PFrame() */

void __thiscall PFrame::~PFrame(PFrame *this)

{
  ~PFrame(this);
  AK::FreeHook(this);
  return;
}


/* PFrame::PFrame(PFrame const&) */

void __thiscall PFrame::PFrame(PFrame *this,PFrame *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_06948db0;
  std::vector<PTrigger*,std::allocator<PTrigger*>>::vector
            ((vector<PTrigger*,std::allocator<PTrigger*>> *)(this + 0x10),(vector *)(param_1 + 0x10)
            );
  return;
}


/* PFrame::AddTrigger(PTrigger*) */

void __thiscall PFrame::AddTrigger(PFrame *this,PTrigger *param_1)

{
  PTrigger *local_8;
  
  if (param_1 != (PTrigger *)0x0) {
    local_8 = param_1;
    std::vector<PTrigger*,std::allocator<PTrigger*>>::push_back
              ((vector<PTrigger*,std::allocator<PTrigger*>> *)(this + 0x10),&local_8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PFrame::readTriggerFromJson(Sexy::RtSerialRtonSync*) */

void __thiscall PFrame::readTriggerFromJson(PFrame *this,RtSerialRtonSync *param_1)

{
  char cVar1;
  uint uVar2;
  RtSerialRtonReader *this_00;
  undefined8 *puVar3;
  RtClass *this_01;
  RClass *this_02;
  CRefNamedSymbolCollection *this_03;
  RAttribute *this_04;
  char *pcVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  string asStack_18 [8];
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtSerialRtonReader *)FUN_04ab9afc(*(undefined8 *)param_1);
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
  Sexy::RtSerialRtonSync::SyncBeginObject(param_1,aRStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  auVar6 = Sexy::RtSerialRtonReader::GetCurrentScope(this_00);
  auVar6 = FUN_04abac88(auVar6._0_8_,auVar6._8_8_,&DAT_06b80a38);
  cVar1 = FUN_04ab9ae0(auVar6._8_8_ & 0xffffffff);
  if (cVar1 == '\0') {
    Sexy::RtSerialRtonSync::SyncEndObject(param_1);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_04abac24(auVar6._0_8_,auVar6._8_8_);
    uVar2 = FUN_04abac1c();
    puVar3 = (undefined8 *)PTrigger::CreateByType(uVar2);
    if (puVar3 != (undefined8 *)0x0) {
      this_01 = (RtClass *)(**(code **)*puVar3)();
      this_02 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_01,true);
      this_03 = (CRefNamedSymbolCollection *)Reflection::RClass::GetFields(this_02,true);
      uVar2 = Reflection::CRefNamedSymbolCollection::GetCount(this_03);
      if (uVar2 != 0) {
        uVar5 = 0;
        do {
          while( true ) {
            this_04 = (RAttribute *)
                      Reflection::TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                                ((TRefNamedSymbolCollection<Reflection::RField> *)this_03,uVar5);
            pcVar4 = (char *)Reflection::RAttribute::GetName(this_04);
            std::string::string(asStack_18,pcVar4);
            nop();
            cVar1 = std::operator==(asStack_18,(string *)&DAT_06b80a38);
            if (cVar1 == '\0') break;
            uVar5 = uVar5 + 1;
            std::string::~string(asStack_18);
            if (uVar5 == uVar2) goto LAB_04ac02a8;
          }
          uVar5 = uVar5 + 1;
          pcVar4 = (char *)Reflection::RAttribute::GetName(this_04);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,pcVar4);
          Reflection::RField::InstanceRtonSync((RField *)this_04,puVar3,param_1,aRStack_10);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
          std::string::~string(asStack_18);
        } while (uVar5 != uVar2);
      }
    }
LAB_04ac02a8:
    Sexy::RtSerialRtonSync::SyncEndObject(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PFrame::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall PFrame::Serialize(PFrame *this,RtSerializeContext *param_1)

{
  long lVar1;
  RtSerialRtonSync RVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  RtClass *this_00;
  RClass *this_01;
  RtSerialRtonSync *this_02;
  RtSerialRtonKey *pRVar8;
  CRefNamedSymbolCollection *this_03;
  RAttribute *this_04;
  char *pcVar9;
  RtSerialRtonReader *pRVar10;
  RtSerialRtonWriter *this_05;
  undefined8 *puVar11;
  ulong extraout_x1;
  long lVar12;
  long *plVar13;
  uint uVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  string asStack_48 [8];
  uint local_40 [2];
  long local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtClass *)(*(code *)**(undefined8 **)this)();
  this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
  if (this_01 != (RClass *)0x0) {
    this_02 = (RtSerialRtonSync *)FUN_04ab9b04(*(undefined8 *)(param_1 + 8));
    pRVar8 = (RtSerialRtonKey *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)param_1);
    cVar3 = Sexy::RtSerialRtonSync::SyncBeginObject(this_02,pRVar8);
    if (cVar3 != '\0') {
      this_03 = (CRefNamedSymbolCollection *)Reflection::RClass::GetFields(this_01,true);
      uVar6 = Reflection::CRefNamedSymbolCollection::GetCount(this_03);
      if (uVar6 != 0) {
        uVar14 = 0;
LAB_04ac0400:
        do {
          this_04 = (RAttribute *)
                    Reflection::TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                              ((TRefNamedSymbolCollection<Reflection::RField> *)this_03,uVar14);
          pcVar9 = (char *)Reflection::RAttribute::GetName(this_04);
          std::string::string(asStack_48,pcVar9);
          nop();
          cVar4 = FUN_04ab9aec(this_02[0x10]);
          if (cVar4 == '\0') {
LAB_04ac0460:
            bVar5 = std::operator==(asStack_48,"ts");
            if (!bVar5) {
              uVar14 = uVar14 + 1;
              pcVar9 = (char *)Reflection::RAttribute::GetName(this_04);
              Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,pcVar9);
              Reflection::RField::InstanceRtonSync
                        ((RField *)this_04,this,this_02,(RtSerialRtonKey *)local_38);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
              std::string::~string(asStack_48);
              if (uVar14 == uVar6) break;
              goto LAB_04ac0400;
            }
            RVar2 = this_02[0x10];
            cVar4 = FUN_04ab9af0(RVar2);
            if (cVar4 == '\0') {
              cVar4 = FUN_04ab9aec(RVar2);
              if (cVar4 != '\0') {
                pRVar10 = (RtSerialRtonReader *)FUN_04ab9afc(*(undefined8 *)this_02);
                local_40[0] = 0;
                TGABagData::TGABagData((TGABagData *)local_38,(TGABagData *)asStack_48);
                Sexy::RtSerialRtonReader::BeginArray(pRVar10,(RtSerialRtonKey *)local_38,local_40);
                std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                          ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
                uVar7 = 0;
                if (local_40[0] != 0) {
                  do {
                    local_38[0] = readTriggerFromJson(this,this_02);
                    if (local_38[0] != 0) {
                      std::vector<PTrigger*,std::allocator<PTrigger*>>::push_back
                                ((vector<PTrigger*,std::allocator<PTrigger*>> *)(this + 0x10),
                                 (PTrigger **)local_38);
                    }
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < local_40[0]);
                }
                Sexy::RtSerialRtonReader::EndArray(pRVar10);
              }
            }
            else {
              this_05 = (RtSerialRtonWriter *)FUN_04ab9b00(*(undefined8 *)(this_02 + 8));
              uVar7 = FUN_04ab9c58(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
              TGABagData::TGABagData((TGABagData *)local_38,(TGABagData *)asStack_48);
              Sexy::RtSerialRtonWriter::BeginArray(this_05,(RtSerialRtonKey *)local_38,uVar7,0xfd);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
              lVar12 = 0;
              if (uVar7 != 0) {
                do {
                  lVar1 = lVar12 + 1;
                  puVar11 = (undefined8 *)FUN_04ab9c64(*(undefined8 *)(this + 0x10),lVar12);
                  plVar13 = (long *)*puVar11;
                  pcVar15 = *(code **)(*plVar13 + 0x30);
                  Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_40,(char *)0x0);
                  Sexy::RtSerializeContext::RtSerializeContext
                            ((RtSerializeContext *)local_38,this_02,(RtSerialRtonKey *)local_40,0);
                  (*pcVar15)(plVar13,(RtSerialRtonKey *)local_38);
                  Sexy::RtSerializeContext::~RtSerializeContext((RtSerializeContext *)local_38);
                  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_40);
                  lVar12 = lVar1;
                } while ((uint)lVar1 < uVar7);
              }
              Sexy::RtSerialRtonWriter::EndArray(this_05);
            }
          }
          else {
            pRVar10 = (RtSerialRtonReader *)FUN_04ab9afc(*(undefined8 *)this_02);
            auVar16 = Sexy::RtSerialRtonReader::GetCurrentScope(pRVar10);
            FUN_04abac88(auVar16._0_8_,auVar16._8_8_,asStack_48);
            cVar4 = FUN_04ab9ae0(extraout_x1 & 0xffffffff);
            if (cVar4 != '\0') goto LAB_04ac0460;
          }
          uVar14 = uVar14 + 1;
          std::string::~string(asStack_48);
        } while (uVar14 != uVar6);
      }
      Sexy::RtSerialRtonSync::SyncEndObject(this_02);
      goto LAB_04ac04cc;
    }
  }
  cVar3 = '\0';
LAB_04ac04cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

