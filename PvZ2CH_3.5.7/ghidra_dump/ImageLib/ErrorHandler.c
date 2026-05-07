// Class: ImageLib::ErrorHandler


/* ImageLib::ErrorHandler::OnErrorExit(jpeg_common_struct*) */

void ImageLib::ErrorHandler::OnErrorExit(jpeg_common_struct *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(lVar1 + 0xa8),1);
}


/* ImageLib::ErrorHandler::ErrorHandler(jpeg_compress_struct*) */

void __thiscall
ImageLib::ErrorHandler::ErrorHandler(ErrorHandler *this,jpeg_compress_struct *param_1)

{
  undefined8 uVar1;
  
  uVar1 = jpeg_std_error();
  *(undefined8 *)param_1 = uVar1;
  *(code **)this = OnErrorExit;
  return;
}

