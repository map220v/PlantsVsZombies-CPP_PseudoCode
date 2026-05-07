// Class: Sexy::RSBPatchGenerator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatchGenerator::CreateBinaryDiffData(unsigned char*, unsigned int, unsigned char*,
   unsigned int, unsigned int&) */

void __thiscall
Sexy::RSBPatchGenerator::CreateBinaryDiffData
          (RSBPatchGenerator *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4,
          uint *param_5)

{
  char cVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  ulong uVar3;
  string asStack_28 [8];
  VCDiffEncoder aVStack_20 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar3 = (ulong)param_2;
  if (param_1 == (uchar *)0x0) {
    uVar3 = 0;
  }
  local_8 = ___stack_chk_guard;
  *param_5 = 0;
  Set8BytesTo0(asStack_28);
  open_vcdiff::VCDiffEncoder::VCDiffEncoder(aVStack_20,(char *)param_1,uVar3);
  FUN_051a4fb8(auStack_10);
  open_vcdiff::VCDiffEncoder::Encode<std::string>
            (aVStack_20,(char *)param_3,(ulong)param_4,asStack_28);
  cVar1 = FUN_0547419c(asStack_28);
  if (cVar1 == '\0') {
    uVar2 = FUN_05474178(asStack_28);
    *param_5 = uVar2;
    __dest = operator_new__((ulong)uVar2);
    __src = (void *)FUN_054742a4(asStack_28);
    memcpy(__dest,__src,(ulong)*param_5);
  }
  else {
    __dest = (void *)0x0;
  }
  open_vcdiff::VCDiffEncoder::~VCDiffEncoder(aVStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatchGenerator::MakePatch(std::string const&, std::string const&, std::string const&) */

void __thiscall
Sexy::RSBPatchGenerator::MakePatch
          (RSBPatchGenerator *this,string *param_1,string *param_2,string *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uchar *__s1;
  uchar *puVar9;
  ulong uVar10;
  string *psVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  ColourFit *pCVar14;
  ColourFit *pCVar15;
  char *pcVar16;
  ColourFit *this_00;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  FileWriter aFStack_1e0 [8];
  undefined8 local_1d8;
  string asStack_1d0 [8];
  undefined8 local_1c8;
  ulong local_1c0;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_1b8 [24];
  undefined8 local_1a0;
  undefined8 local_198;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_188 [48];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  uchar auStack_13c [16];
  undefined4 local_12c;
  undefined4 local_128;
  ResStreamsUnpacker aRStack_120 [64];
  ResStreamsUnpacker aRStack_e0 [64];
  undefined4 local_a0;
  undefined4 local_9c;
  char acStack_98 [128];
  uchar auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FileExists(param_1,(bool *)0x0);
  cVar4 = '\0';
  if (cVar3 == '\0') goto LAB_051ac5e8;
  ResStreamsUnpacker::ResStreamsUnpacker(aRStack_120,*(SexyAppBase **)this);
  ResStreamsUnpacker::ResStreamsUnpacker(aRStack_e0,*(SexyAppBase **)this);
  cVar4 = ResStreamsUnpacker::Init((string *)aRStack_120);
  if ((cVar4 == '\0') || (cVar4 = ResStreamsUnpacker::Init((string *)aRStack_e0), cVar4 == '\0')) {
LAB_051ac664:
    cVar4 = '\0';
  }
  else {
    local_1f4 = 0;
    __s1 = (uchar *)ResStreamsUnpacker::GetCommonData(aRStack_120,&local_1f4);
    if (__s1 == (uchar *)0x0) goto LAB_051ac664;
    local_1f0 = 0;
    puVar9 = (uchar *)ResStreamsUnpacker::GetCommonData(aRStack_e0,&local_1f0);
    uVar2 = local_1f0;
    uVar1 = local_1f4;
    if (puVar9 == (uchar *)0x0) goto LAB_051ac664;
    if ((local_1f4 == local_1f0) && (iVar8 = memcmp(__s1,puVar9,(ulong)local_1f4), iVar8 == 0)) {
      puVar9 = (uchar *)0x0;
      iVar8 = 0;
      local_1ec = 0;
    }
    else {
      local_1ec = 0;
      puVar9 = (uchar *)CreateBinaryDiffData(this,__s1,uVar1,puVar9,uVar2,&local_1ec);
      if (puVar9 == (uchar *)0x0) goto LAB_051ac664;
      iVar8 = 1;
    }
    cVar4 = '\0';
    FileWriter::FileWriter(aFStack_1e0,param_3);
    cVar3 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)aFStack_1e0);
    if (cVar3 == '\0') {
      uVar10 = (**(code **)(**(long **)(*(long *)this + 0x28) + 0xd0))
                         (*(long **)(*(long *)this + 0x28),param_2);
      ResStreamsUnpacker::GetResourceGroupNameOrder();
      ResStreamsUnpacker::GetResourceGroupNameOrder();
      bVar5 = (bool)BaseTask::IsExecuting((BaseTask *)aRStack_120);
      local_158 = ByteSwapInt(0x52534250,bVar5);
      local_154 = ByteSwapInt(1,bVar5);
      local_150 = ByteSwapInt(2,bVar5);
      local_148 = ByteSwapUINT64(uVar10,bVar5);
      local_140 = ByteSwapInt(local_1ec,bVar5);
      iVar7 = FUN_051a4d98(local_1a0,local_198);
      local_12c = ByteSwapInt(iVar7,bVar5);
      local_128 = ByteSwapInt(iVar8,bVar5);
      calcBufferContentsMd5Digest(__s1,local_1f4,auStack_13c);
      cVar4 = FileWriter::Write(aFStack_1e0,(uchar *)&local_158,0x38);
      if ((cVar4 == '\0') ||
         ((iVar8 == 1 &&
          (cVar4 = FileWriter::Write(aFStack_1e0,puVar9,(ulong)local_1ec), cVar4 == '\0')))) {
        cVar4 = '\0';
        FileWriter::Close(aFStack_1e0);
        (**(code **)(**(long **)(*(long *)this + 0x28) + 0x140))
                  (*(long **)(*(long *)this + 0x28),param_3);
      }
      else {
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_188);
        local_1c8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(avStack_1b8);
        while( true ) {
          local_1c0 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(avStack_1b8);
          cVar4 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_1c8,(__normal_iterator *)&local_1c0);
          if (!(bool)cVar4) break;
          psVar11 = (string *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1c8);
          puVar12 = (undefined1 *)
                    std::
                    map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                    ::operator[]((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                                  *)amStack_188,psVar11);
          *puVar12 = 1;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1c8);
        }
        local_1d8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_1a0);
        while( true ) {
          local_1c0 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_1a0);
          bVar6 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_1d8,(__normal_iterator *)&local_1c0);
          if (!bVar6) break;
          uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
          FUN_05475d88(asStack_1d0,uVar13);
          local_1e8 = 0;
          pCVar14 = (ColourFit *)
                    ResStreamsUnpacker::AllocResGroupData(aRStack_e0,asStack_1d0,&local_1e8);
          bVar6 = (bool)BaseTask::IsExecuting((BaseTask *)aRStack_e0);
          cVar3 = IsGpuDataCompressed((uchar *)pCVar14,bVar6);
          this_00 = pCVar14;
          if (cVar3 != '\0') {
            bVar6 = (bool)BaseTask::IsExecuting((BaseTask *)aRStack_e0);
            this_00 = (ColourFit *)DecompressResGroupGpuData((uchar *)pCVar14,bVar6,&local_1e8);
            if (pCVar14 != (ColourFit *)0x0) {
              EATextSquish::ColourFit::~ColourFit(pCVar14);
            }
          }
          local_1e4 = 0;
          local_1c8 = std::
                      map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                      ::find((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                              *)amStack_188,asStack_1d0);
          local_1c0 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)amStack_188);
          bVar6 = eastl::operator!=((rbtree_iterator *)&local_1c8,(rbtree_iterator *)&local_1c0);
          pCVar14 = (ColourFit *)0x0;
          if (bVar6) {
            pCVar15 = (ColourFit *)
                      ResStreamsUnpacker::AllocResGroupData(aRStack_120,asStack_1d0,&local_1e4);
            bVar6 = (bool)BaseTask::IsExecuting((BaseTask *)aRStack_120);
            cVar3 = IsGpuDataCompressed((uchar *)pCVar15,bVar6);
            pCVar14 = pCVar15;
            if (cVar3 != '\0') {
              bVar6 = (bool)BaseTask::IsExecuting((BaseTask *)aRStack_120);
              pCVar14 = (ColourFit *)DecompressResGroupGpuData((uchar *)pCVar15,bVar6,&local_1e4);
              if (pCVar15 != (ColourFit *)0x0) {
                EATextSquish::ColourFit::~ColourFit(pCVar15);
              }
            }
          }
          uVar2 = local_1e4;
          uVar1 = local_1e8;
          local_1c0 = local_1c0 & 0xffffffff00000000;
          if ((local_1e4 == local_1e8) &&
             (iVar8 = memcmp(pCVar14,this_00,(ulong)local_1e4), iVar8 == 0)) {
            local_a0 = ByteSwapInt(0,bVar5);
            local_9c = ByteSwapInt((int)local_1c0,bVar5);
            pcVar16 = (char *)FUN_0547429c(asStack_1d0);
            strcpy(acStack_98,pcVar16);
            calcBufferContentsMd5Digest((uchar *)pCVar14,local_1e4,auStack_18);
            cVar3 = FileWriter::Write(aFStack_1e0,(uchar *)&local_a0,0x98);
            if (cVar3 == '\0') {
              FileWriter::Close(aFStack_1e0);
              (**(code **)(**(long **)(*(long *)this + 0x28) + 0x140))
                        (*(long **)(*(long *)this + 0x28),param_3);
LAB_051acc28:
              EATextSquish::ColourFit::~ColourFit(pCVar14);
              goto LAB_051acc30;
            }
LAB_051acacc:
            EATextSquish::ColourFit::~ColourFit(pCVar14);
          }
          else {
            pCVar15 = (ColourFit *)
                      CreateBinaryDiffData
                                (this,(uchar *)pCVar14,uVar2,(uchar *)this_00,uVar1,
                                 (uint *)&local_1c0);
            local_a0 = ByteSwapInt(1,bVar5);
            local_9c = ByteSwapInt((int)local_1c0,bVar5);
            pcVar16 = (char *)FUN_0547429c(asStack_1d0);
            strcpy(acStack_98,pcVar16);
            calcBufferContentsMd5Digest((uchar *)pCVar14,local_1e4,auStack_18);
            cVar3 = FileWriter::Write(aFStack_1e0,(uchar *)&local_a0,0x98);
            if ((cVar3 == '\0') ||
               (cVar3 = FileWriter::Write(aFStack_1e0,(uchar *)pCVar15,local_1c0 & 0xffffffff),
               cVar3 == '\0')) {
              FileWriter::Close(aFStack_1e0);
              (**(code **)(**(long **)(*(long *)this + 0x28) + 0x140))
                        (*(long **)(*(long *)this + 0x28),param_3);
              if (pCVar15 != (ColourFit *)0x0) {
                EATextSquish::ColourFit::~ColourFit(pCVar15);
              }
              if (pCVar14 != (ColourFit *)0x0) goto LAB_051acc28;
LAB_051acc30:
              if (this_00 != (ColourFit *)0x0) {
                EATextSquish::ColourFit::~ColourFit(this_00);
              }
              std::string::~string(asStack_1d0);
              goto LAB_051acc44;
            }
            if (pCVar15 != (ColourFit *)0x0) {
              EATextSquish::ColourFit::~ColourFit(pCVar15);
            }
            if (pCVar14 != (ColourFit *)0x0) goto LAB_051acacc;
          }
          if (this_00 != (ColourFit *)0x0) {
            EATextSquish::ColourFit::~ColourFit(this_00);
          }
          std::string::~string(asStack_1d0);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1d8);
        }
        cVar4 = FileWriter::PadTo(aFStack_1e0,0x800,(uint *)0x0);
        if (cVar4 == '\0') {
          FileWriter::Close(aFStack_1e0);
          (**(code **)(**(long **)(*(long *)this + 0x28) + 0x140))
                    (*(long **)(*(long *)this + 0x28),param_3);
        }
        else {
          FileWriter::Close(aFStack_1e0);
        }
LAB_051acc44:
        std::
        map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
        ::~map((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                *)amStack_188);
      }
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_1a0);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)avStack_1b8);
    }
    FileWriter::~FileWriter(aFStack_1e0);
  }
  ResStreamsUnpacker::~ResStreamsUnpacker(aRStack_e0);
  ResStreamsUnpacker::~ResStreamsUnpacker(aRStack_120);
LAB_051ac5e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar4);
  }
  return;
}

