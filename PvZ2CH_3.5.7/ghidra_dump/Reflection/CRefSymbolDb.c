// Class: Reflection::CRefSymbolDb


/* Reflection::CRefSymbolDb::GetClasses() const */

CRefSymbolDb * __thiscall Reflection::CRefSymbolDb::GetClasses(CRefSymbolDb *this)

{
  return this + 0x50;
}


/* Reflection::CRefSymbolDb::HasStringFlags(unsigned int) */

bool Reflection::CRefSymbolDb::HasStringFlags(uint param_1)

{
  return (param_1 & sStringFlags) != 0;
}


/* Reflection::CRefSymbolDb::AddStringFlags(unsigned int) */

void Reflection::CRefSymbolDb::AddStringFlags(uint param_1)

{
  sStringFlags = param_1 | sStringFlags;
  return;
}


/* Reflection::CRefSymbolDb::RemoveStringFlags(unsigned int) */

void Reflection::CRefSymbolDb::RemoveStringFlags(uint param_1)

{
  sStringFlags = sStringFlags & (param_1 ^ 0xffffffff);
  return;
}


/* Reflection::CRefSymbolDb::EnsureFullyLoaded() */

void __thiscall Reflection::CRefSymbolDb::EnsureFullyLoaded(CRefSymbolDb *this)

{
  uint uVar1;
  uint uVar2;
  CRefNamedSymbolCollection *pCVar3;
  RClass *this_00;
  REnum *this_01;
  uint uVar4;
  
  if (this[0x100] == (CRefSymbolDb)0x0) {
    pCVar3 = (CRefNamedSymbolCollection *)GetClasses(this);
    uVar2 = CRefNamedSymbolCollection::GetCount(pCVar3);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = uVar4 + 1;
        this_00 = (RClass *)
                  TRefNamedSymbolCollection<Reflection::RClass>::GetIndexed
                            ((TRefNamedSymbolCollection<Reflection::RClass> *)pCVar3,uVar4,true);
        RClass::LoadClass(this_00);
        uVar4 = uVar1;
      } while (uVar1 != uVar2);
    }
    pCVar3 = (CRefNamedSymbolCollection *)
             PlantWarsNetworkMgr::GetEndPlayData((PlantWarsNetworkMgr *)this);
    uVar2 = CRefNamedSymbolCollection::GetCount(pCVar3);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = uVar4 + 1;
        this_01 = (REnum *)TRefNamedSymbolCollection<Reflection::REnum>::GetIndexed
                                     ((TRefNamedSymbolCollection<Reflection::REnum> *)pCVar3,uVar4,
                                      true);
        REnum::LoadEnum(this_01);
        uVar4 = uVar1;
      } while (uVar1 != uVar2);
    }
    this[0x100] = (CRefSymbolDb)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefSymbolDb::GetTypeForRTTITypeName(char const*) */

void __thiscall Reflection::CRefSymbolDb::GetTypeForRTTITypeName(CRefSymbolDb *this,char *param_1)

{
  bool bVar1;
  long lVar2;
  TRefNamedSymbolCollection<Reflection::RClass> *this_00;
  undefined8 uVar3;
  TRefNamedSymbolCollection<Reflection::REnum> *this_01;
  long lVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,param_1);
  nop();
  FUN_05475ffc(asStack_10,asStack_20,0,5);
  bVar1 = std::operator==(asStack_10,"enum ");
  std::string::~string(asStack_10);
  if (bVar1) {
    bVar1 = true;
    lVar4 = 5;
  }
  else {
    FUN_05475ffc(asStack_10,asStack_20,0,6);
    bVar1 = std::operator==(asStack_10,"class ");
    std::string::~string(asStack_10);
    if (!bVar1) {
      uVar3 = 0;
      goto LAB_05185138;
    }
    lVar4 = 6;
    bVar1 = false;
  }
  lVar2 = FUN_054743b0(asStack_20,0x20,lVar4);
  Set8BytesTo0(asStack_18);
  if (lVar2 != -1) {
    lVar2 = lVar2 - lVar4;
  }
  FUN_05475ffc(asStack_10,asStack_20,lVar4,lVar2);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  if (bVar1) {
    this_01 = (TRefNamedSymbolCollection<Reflection::REnum> *)
              PlantWarsNetworkMgr::GetEndPlayData((PlantWarsNetworkMgr *)this);
    uVar3 = TRefNamedSymbolCollection<Reflection::REnum>::GetNamed(this_01,asStack_18,true);
  }
  else {
    this_00 = (TRefNamedSymbolCollection<Reflection::RClass> *)GetClasses(this);
    uVar3 = TRefNamedSymbolCollection<Reflection::RClass>::GetNamed(this_00,asStack_18,true);
  }
  std::string::~string(asStack_18);
LAB_05185138:
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Reflection::CRefSymbolDb::CRefSymbolDb() */

void __thiscall Reflection::CRefSymbolDb::CRefSymbolDb(CRefSymbolDb *this)

{
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)this);
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x50));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0xa0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x100] = (CRefSymbolDb)0x0;
  return;
}


/* Reflection::CRefSymbolDb::GetManualReflection() */

CRefSymbolDb * Reflection::CRefSymbolDb::GetManualReflection(void)

{
  char cVar1;
  CRefSymbolDb *pCVar2;
  
  if (DAT_06bbd7e0 == (CRefSymbolDb *)0x0) {
    pCVar2 = ::operator_new(0x108);
    CRefSymbolDb(pCVar2);
    DAT_06bbd7e0 = pCVar2;
    GetManualSymbolBuilder(pCVar2);
  }
  pCVar2 = DAT_06bbd7e0;
  cVar1 = FUN_0517ecec(*(undefined8 *)(DAT_06bbd7e0 + 0xf0));
  if (cVar1 == '\0') {
    pCVar2 = (CRefSymbolDb *)0x0;
  }
  return pCVar2;
}


/* Reflection::CRefSymbolDb::GetManualSymbolBuilder() */

long __thiscall Reflection::CRefSymbolDb::GetManualSymbolBuilder(CRefSymbolDb *this)

{
  CRefManualSymbolBuilder *this_00;
  
  if (*(long *)(this + 0xf8) != 0) {
    return *(long *)(this + 0xf8);
  }
  this_00 = ::operator_new(0x160);
  CRefManualSymbolBuilder::CRefManualSymbolBuilder(this_00,this);
  *(CRefManualSymbolBuilder **)(this + 0xf8) = this_00;
  *(CRefManualSymbolBuilder **)(this + 0xf0) = this_00;
  CRefManualSymbolBuilder::InitCommonTypes();
  return *(long *)(this + 0xf8);
}


/* Reflection::CRefSymbolDb::~CRefSymbolDb() */

void __thiscall Reflection::CRefSymbolDb::~CRefSymbolDb(CRefSymbolDb *this)

{
  if (*(undefined8 **)(this + 0xf0) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0xf0))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0xa0));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x50));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefSymbolDb::WriteRtonRepresentation(Sexy::RtSerialBuffer*) */

void __thiscall
Reflection::CRefSymbolDb::WriteRtonRepresentation(CRefSymbolDb *this,RtSerialBuffer *param_1)

{
  uint uVar1;
  CRefNamedSymbolCollection *pCVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  RtId *pRVar12;
  char *pcVar13;
  long lVar14;
  CRefNamedSymbolCollection *pCVar15;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var16;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var17;
  long *plVar18;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *extraout_x1_01;
  _func_void *extraout_x1_02;
  _func_void *extraout_x1_03;
  undefined8 uVar19;
  RtId aRStack_b8 [8];
  RtSerialRtonKey aRStack_b0 [8];
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  EnsureFullyLoaded(this);
  Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8,param_1);
  Sexy::RtSerialRtonWriter::BeginDocumentObject(aRStack_a8);
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"version");
  Sexy::RtSerialRtonWriter::WriteInt32VarU(aRStack_a8,aRStack_b0,1);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"types");
  uVar5 = CRefNamedSymbolCollection::GetCount((CRefNamedSymbolCollection *)this);
  Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar5,0x85);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  uVar6 = CRefNamedSymbolCollection::GetCount((CRefNamedSymbolCollection *)this);
  if (uVar6 != 0) {
    do {
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
      Sexy::RtSerialRtonWriter::BeginObject(aRStack_a8,aRStack_b0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                             ((TRefNamedSymbolCollection<Reflection::RType> *)this,uVar8);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"id");
      pRVar12 = (RtId *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_end(p_Var11);
      Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      uVar7 = (**(code **)(*(long *)p_Var11 + 0x48))(p_Var11);
      if (uVar7 == 0x10) {
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
        pcVar13 = "named_unknown";
        goto LAB_05188e90;
      }
      if (uVar7 < 0x11) {
        if (uVar7 == 2) {
          plVar18 = (long *)FUN_0517e5a0(*(undefined8 *)(p_Var11 + 0x78));
          iVar9 = (**(code **)(*plVar18 + 0x48))();
          if (iVar9 != 1) {
LAB_051890f0:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"reference",true);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            iVar9 = FUN_0517e59c(*(undefined4 *)(p_Var11 + 0x70));
            if (iVar9 == 1) {
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"rtc");
              pcVar13 = "ptr";
            }
            else {
              if (iVar9 != 0) {
                if (iVar9 != 2) goto switchD_05189208_default;
                Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"rtc");
                Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"array",false);
                std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                          ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
                Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"inner_type");
                p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)FUN_0517e5a0(*(undefined8 *)(p_Var11 + 0x78));
                pRVar12 = (RtId *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_end(p_Var17);
                Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
                std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                          ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
                Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"array_count");
                iVar9 = FUN_0517e5a4(*(undefined4 *)(p_Var11 + 0x80));
                Sexy::RtSerialRtonWriter::WriteInt32VarS(aRStack_a8,aRStack_b0,iVar9);
                std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                          ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
                goto LAB_0518840c;
              }
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"rtc");
              pcVar13 = "amp";
            }
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"inner_type");
            p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_0517e5a0(*(undefined8 *)(p_Var11 + 0x78));
            goto LAB_051883f0;
          }
          lVar14 = FUN_0517e5a0(*(undefined8 *)(p_Var11 + 0x78));
          iVar9 = FUN_0517e278(*(undefined4 *)(lVar14 + 0x70));
          if (iVar9 == 4) {
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"custom",true);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
switchD_05189208_caseD_0:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"ctc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"string",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          }
          else {
            if (iVar9 != 5) goto LAB_051890f0;
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"custom",true);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
switchD_05189208_caseD_1:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"ctc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"wstring",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          }
        }
        else if (uVar7 < 3) {
          if (uVar7 != 1) {
switchD_05189208_default:
            uVar19 = 0;
            goto LAB_05188344;
          }
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"simple",true);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          uVar5 = FUN_0517e278(*(undefined4 *)(p_Var11 + 0x70));
          switch(uVar5) {
          case 0:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"none",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            break;
          case 1:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"ellipsis",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            break;
          case 2:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"void",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            break;
          case 3:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"bool",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            break;
          case 4:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"char",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            break;
          case 5:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"wchar_t",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            break;
          case 6:
            uVar5 = FUN_0517e268(*(undefined4 *)(p_Var11 + 0x68));
            switch(uVar5) {
            case 1:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"int8",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            case 2:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"int16",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            default:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"int_unknownsize",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            case 4:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"int32",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            case 8:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"int64",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            }
            break;
          case 7:
            uVar5 = FUN_0517e268(*(undefined4 *)(p_Var11 + 0x68));
            switch(uVar5) {
            case 1:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"uint8",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            case 2:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"uint16",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            default:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"uint_unknownsize",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            case 4:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"uint32",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              break;
            case 8:
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"uint64",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            }
            break;
          case 8:
            iVar9 = FUN_0517e268(*(undefined4 *)(p_Var11 + 0x68));
            if (iVar9 == 4) {
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"float",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            }
            else if (iVar9 == 8) {
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"double",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            }
            else {
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
              Sexy::RtSerialRtonWriter::WriteString
                        (aRStack_a8,aRStack_b0,"floating_unknownsize",false);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            }
            break;
          case 9:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"stc");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"hresult",false);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            break;
          default:
            goto switchD_05189208_default;
          }
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"size");
          iVar9 = FUN_0517e268(*(undefined4 *)(p_Var11 + 0x68));
          Sexy::RtSerialRtonWriter::WriteInt32VarU(aRStack_a8,aRStack_b0,iVar9);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
        }
        else {
          if (uVar7 == 3) {
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"function",true);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_0517eaa4(*(undefined8 *)(p_Var11 + 0x78));
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"this_type");
            if (p_Var17 ==
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
              std::__exception_ptr::exception_ptr::exception_ptr
                        ((exception_ptr *)aRStack_b8,extraout_x1_01);
            }
            else {
              pRVar12 = (RtId *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_end(p_Var17);
              Sexy::RtId::RtId(aRStack_b8,pRVar12);
            }
            Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,aRStack_b8);
            Sexy::RtId::~RtId(aRStack_b8);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_0517eaa8(*(undefined8 *)(p_Var11 + 0x80));
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"return_type");
            if (p_Var17 ==
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
              std::__exception_ptr::exception_ptr::exception_ptr
                        ((exception_ptr *)aRStack_b8,extraout_x1_02);
            }
            else {
              pRVar12 = (RtId *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_end(p_Var17);
              Sexy::RtId::RtId(aRStack_b8,pRVar12);
            }
            Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,aRStack_b8);
            Sexy::RtId::~RtId(aRStack_b8);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"arg_types");
            uVar5 = RFunctionType::GetArgTypeCount((RFunctionType *)p_Var11);
            Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar5,0x83);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            for (uVar7 = 0; uVar10 = RFunctionType::GetArgTypeCount((RFunctionType *)p_Var11),
                uVar7 < uVar10; uVar7 = uVar7 + 1) {
              p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)RFunctionType::GetArgTypeIndexed((RFunctionType *)p_Var11,uVar7);
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
              if (p_Var17 ==
                  (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)0x0) {
                std::__exception_ptr::exception_ptr::exception_ptr
                          ((exception_ptr *)aRStack_b8,extraout_x1_03);
              }
              else {
                pRVar12 = (RtId *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_end(p_Var17);
                Sexy::RtId::RtId(aRStack_b8,pRVar12);
              }
              Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,aRStack_b8);
              Sexy::RtId::~RtId(aRStack_b8);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            }
            Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
            goto LAB_0518840c;
          }
          if (uVar7 != 4) goto switchD_05189208_default;
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"custom",true);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          uVar5 = FUN_0517eaac(*(undefined4 *)(p_Var11 + 0x70));
          switch(uVar5) {
          case 0:
            goto switchD_05189208_caseD_0;
          case 1:
            goto switchD_05189208_caseD_1;
          case 2:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"ctc");
            pcVar13 = "vector";
            break;
          case 3:
          case 4:
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"ctc");
            pcVar13 = "rtid";
            break;
          default:
            goto switchD_05189208_default;
          }
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,false);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          lVar14 = FUN_0517eab0(*(undefined8 *)(p_Var11 + 0x78));
          if (lVar14 != 0) {
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"inner_type");
            p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_0517eab0(*(undefined8 *)(p_Var11 + 0x78));
            goto LAB_051883f0;
          }
        }
      }
      else {
        if (uVar7 != 0x40) {
          if (uVar7 < 0x41) {
            if (uVar7 != 0x20) goto switchD_05189208_default;
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
            pcVar13 = "class";
          }
          else {
            if (uVar7 != 0x80) {
              if (uVar7 != 0x100) goto switchD_05189208_default;
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
              Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"enumref",true);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"ref");
              p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)FUN_05181a90(p_Var11 + 0x78);
              goto LAB_051883f0;
            }
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
            pcVar13 = "enum";
          }
LAB_05188e90:
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"name");
          pcVar13 = (char *)RNamedType::GetName((RNamedType *)p_Var11);
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          goto LAB_0518840c;
        }
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"category");
        Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,"classref",true);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"ref");
        p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)FUN_05181860(p_Var11 + 0x78);
LAB_051883f0:
        pRVar12 = (RtId *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_end(p_Var11);
        Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      }
LAB_0518840c:
      uVar8 = uVar8 + 1;
      Sexy::RtSerialRtonWriter::EndObject(aRStack_a8);
    } while (uVar8 != uVar6);
  }
  pCVar2 = (CRefNamedSymbolCollection *)(this + 0x50);
  Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"classes");
  uVar5 = CRefNamedSymbolCollection::GetCount(pCVar2);
  Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar5,0x85);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  uVar8 = CRefNamedSymbolCollection::GetCount(pCVar2);
  if (uVar8 != 0) {
    uVar6 = 0;
    do {
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
      Sexy::RtSerialRtonWriter::BeginObject(aRStack_a8,aRStack_b0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)TRefNamedSymbolCollection<Reflection::RClass>::GetIndexed
                             ((TRefNamedSymbolCollection<Reflection::RClass> *)pCVar2,uVar6,true);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"id");
      pRVar12 = (RtId *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_end(p_Var11);
      Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"name");
      pcVar13 = (char *)RNamedType::GetName((RNamedType *)p_Var11);
      Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      lVar14 = FUN_0517ebb0(*(undefined8 *)(p_Var11 + 0x90));
      if (lVar14 != 0) {
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"bound_rtclass");
        FUN_0517ebb0(*(undefined8 *)(p_Var11 + 0x90));
        Sexy::ResourceInfo::GetInstanceRtId();
        Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,aRStack_b8);
        Sexy::RtId::~RtId(aRStack_b8);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      }
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"bases");
      pCVar15 = (CRefNamedSymbolCollection *)RClass::GetAncestors((RClass *)p_Var11);
      uVar5 = CRefNamedSymbolCollection::GetCount(pCVar15);
      Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar5,0x83);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      for (uVar7 = 0; uVar10 = CRefNamedSymbolCollection::GetCount(pCVar15), uVar7 < uVar10;
          uVar7 = uVar7 + 1) {
        lVar14 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                           ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar15,uVar7);
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
        p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)FUN_051819d8(lVar14 + 0x80);
        pRVar12 = (RtId *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_end(p_Var17);
        Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      }
      Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
      pCVar15 = (CRefNamedSymbolCollection *)RClass::GetFields((RClass *)p_Var11,false);
      uVar7 = CRefNamedSymbolCollection::GetCount(pCVar15);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"fields");
      Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar7,0x85);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      if (uVar7 != 0) {
        uVar10 = 0;
        do {
          uVar1 = uVar10 + 1;
          p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                                 ((TRefNamedSymbolCollection<Reflection::RField> *)pCVar15,uVar10);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
          Sexy::RtSerialRtonWriter::BeginObject(aRStack_a8,aRStack_b0);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"id");
          pRVar12 = (RtId *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_end(p_Var17);
          Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"name");
          pcVar13 = (char *)RAttribute::GetName((RAttribute *)p_Var17);
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"type");
          p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)FUN_0517ebc4(*(undefined8 *)(p_Var17 + 0x80));
          pRVar12 = (RtId *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_end(p_Var16);
          Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"offset");
          iVar9 = FUN_0517ebc0(*(undefined4 *)(p_Var17 + 0x7c));
          Sexy::RtSerialRtonWriter::WriteInt32VarU(aRStack_a8,aRStack_b0,iVar9);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          FUN_05187e04(p_Var17,aRStack_a8);
          Sexy::RtSerialRtonWriter::EndObject(aRStack_a8);
          uVar10 = uVar1;
        } while (uVar1 != uVar7);
      }
      uVar7 = 0;
      iVar9 = 0;
      Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
      pCVar15 = (CRefNamedSymbolCollection *)RClass::GetProperties((RClass *)p_Var11,false);
      uVar10 = CRefNamedSymbolCollection::GetCount(pCVar15);
      if (uVar10 == 0) {
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"properties");
        Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,0,0x85);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      }
      else {
        do {
          lVar14 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                             ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar15,uVar7);
          lVar14 = FUN_0517ebd0(*(undefined8 *)(lVar14 + 0x80));
          if ((lVar14 != 0) &&
             (cVar3 = FUN_0517ec0c(*(undefined4 *)(lVar14 + 0x78),1), cVar3 != '\0')) {
            iVar9 = iVar9 + 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar10);
        uVar7 = 0;
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"properties");
        Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,iVar9,0x85);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
        do {
          p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                                 ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar15,uVar7);
          lVar14 = FUN_0517ebd0(*(undefined8 *)(p_Var17 + 0x80));
          if ((lVar14 != 0) &&
             (cVar3 = FUN_0517ec0c(*(undefined4 *)(lVar14 + 0x78),1), cVar3 != '\0')) {
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
            Sexy::RtSerialRtonWriter::BeginObject(aRStack_a8,aRStack_b0);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"id");
            pRVar12 = (RtId *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_end(p_Var17);
            Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"name");
            pcVar13 = (char *)RAttribute::GetName((RAttribute *)p_Var17);
            Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"type");
            p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_0517ebd8(*(undefined8 *)(p_Var17 + 0x90));
            pRVar12 = (RtId *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_end(p_Var16);
            Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_0517ebd0(*(undefined8 *)(p_Var17 + 0x80));
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"getter");
            if (p_Var16 ==
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
              std::__exception_ptr::exception_ptr::exception_ptr
                        ((exception_ptr *)aRStack_b8,extraout_x1);
            }
            else {
              pRVar12 = (RtId *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_end(p_Var16);
              Sexy::RtId::RtId(aRStack_b8,pRVar12);
            }
            Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,aRStack_b8);
            Sexy::RtId::~RtId(aRStack_b8);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_0517ebd4(*(undefined8 *)(p_Var17 + 0x88));
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"setter");
            if (p_Var16 ==
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
              std::__exception_ptr::exception_ptr::exception_ptr
                        ((exception_ptr *)aRStack_b8,extraout_x1_00);
            }
            else {
              pRVar12 = (RtId *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_end(p_Var16);
              Sexy::RtId::RtId(aRStack_b8,pRVar12);
            }
            Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,aRStack_b8);
            Sexy::RtId::~RtId(aRStack_b8);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
            FUN_05187e04(p_Var17,aRStack_a8);
            Sexy::RtSerialRtonWriter::EndObject(aRStack_a8);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar10);
      }
      Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
      pCVar15 = (CRefNamedSymbolCollection *)RClass::GetMethods((RClass *)p_Var11,false);
      uVar10 = CRefNamedSymbolCollection::GetCount(pCVar15);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"methods");
      Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar10,0x85);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      uVar7 = 0;
      if (uVar10 != 0) {
        do {
          uVar1 = uVar7 + 1;
          p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                                 ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar15,uVar7);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
          Sexy::RtSerialRtonWriter::BeginObject(aRStack_a8,aRStack_b0);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"id");
          pRVar12 = (RtId *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_end(p_Var17);
          Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"name");
          pcVar13 = (char *)RAttribute::GetName((RAttribute *)p_Var17);
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"type");
          p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)FUN_0517ebec(*(undefined8 *)(p_Var17 + 0x90));
          pRVar12 = (RtId *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_end(p_Var16);
          Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          FUN_05187e04(p_Var17,aRStack_a8);
          Sexy::RtSerialRtonWriter::EndObject(aRStack_a8);
          uVar7 = uVar1;
        } while (uVar1 != uVar10);
      }
      uVar6 = uVar6 + 1;
      Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
      FUN_05187e04(p_Var11,aRStack_a8);
      Sexy::RtSerialRtonWriter::EndObject(aRStack_a8);
    } while (uVar6 != uVar8);
  }
  pCVar2 = (CRefNamedSymbolCollection *)(this + 0xa0);
  Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"enums");
  uVar5 = CRefNamedSymbolCollection::GetCount(pCVar2);
  Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar5,0x85);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  uVar8 = CRefNamedSymbolCollection::GetCount(pCVar2);
  if (uVar8 != 0) {
    uVar6 = 0;
    do {
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
      Sexy::RtSerialRtonWriter::BeginObject(aRStack_a8,aRStack_b0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)TRefNamedSymbolCollection<Reflection::REnum>::GetIndexed
                             ((TRefNamedSymbolCollection<Reflection::REnum> *)pCVar2,uVar6,true);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"id");
      pRVar12 = (RtId *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_end(p_Var11);
      Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"name");
      pcVar13 = (char *)RNamedType::GetName((RNamedType *)p_Var11);
      Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"isflags");
      bVar4 = (bool)FUN_0517ebb8(*(undefined4 *)(p_Var11 + 0x84));
      Sexy::RtSerialRtonWriter::WriteBool(aRStack_a8,aRStack_b0,bVar4);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      pCVar15 = (CRefNamedSymbolCollection *)ZombieType::GetAudioGroups((ZombieType *)p_Var11);
      uVar10 = CRefNamedSymbolCollection::GetCount(pCVar15);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"members");
      Sexy::RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,uVar10,0x85);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
      uVar7 = 0;
      if (uVar10 != 0) {
        do {
          uVar1 = uVar7 + 1;
          p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                                 ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar15,uVar7);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
          Sexy::RtSerialRtonWriter::BeginObject(aRStack_a8,aRStack_b0);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"id");
          pRVar12 = (RtId *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_end(p_Var17);
          Sexy::RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,pRVar12);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"name");
          pcVar13 = (char *)RAttribute::GetName((RAttribute *)p_Var17);
          Sexy::RtSerialRtonWriter::WriteString(aRStack_a8,aRStack_b0,pcVar13,true);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"value");
          iVar9 = FUN_0517ebb4(*(undefined4 *)(p_Var17 + 0x68));
          Sexy::RtSerialRtonWriter::WriteInt32VarU(aRStack_a8,aRStack_b0,iVar9);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
          FUN_05187e04(p_Var17,aRStack_a8);
          Sexy::RtSerialRtonWriter::EndObject(aRStack_a8);
          uVar7 = uVar1;
        } while (uVar1 != uVar10);
      }
      uVar6 = uVar6 + 1;
      Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
      FUN_05187e04(p_Var11,aRStack_a8);
      Sexy::RtSerialRtonWriter::EndObject(aRStack_a8);
    } while (uVar6 != uVar8);
  }
  uVar19 = 1;
  Sexy::RtSerialRtonWriter::EndArray(aRStack_a8);
  Sexy::RtSerialRtonWriter::EndDocumentObject(aRStack_a8);
LAB_05188344:
  Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
}

