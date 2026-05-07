// Class: AndroidAIO


/* AndroidAIO::aio_read(AndroidAIO::aiocb*) */

void AndroidAIO::aio_read(aiocb *param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0x16;
  *(undefined4 *)(param_1 + 0x20) = 0x73;
  Sexy::AndroidAsyncIOFileDriver::SubmitAsyncRead
            (*(AndroidAsyncIOFileDriver **)(param_1 + 0x28),param_1);
  return;
}

