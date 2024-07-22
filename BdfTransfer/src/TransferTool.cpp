#include "include/TransferTool.h"

void TransferTool::Transfer()
{
    BdfReader reader(_file_address);
    reader.Read();

    BdfProcessor processor(reader.OutPut());
    processor.RemoveNote();
    processor.Process();

    auto file_processor = processor.GetResult();
    
    BdfTransfer transfer(processor.GetResult());
    transfer.trans();
}