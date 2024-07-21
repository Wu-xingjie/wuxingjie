#include "include/TransferTool.h"

void TransferTool::Transfer()
{
    BdfReader reader(_file_address);
    reader.Read();

    // auto file = reader.OutPut();
    // for (auto i : file)
    // {
    //     cout << i << endl;
    // }

    BdfProcessor processor(reader.OutPut());
    //processor.RemoveNote();
    processor.RemoveBlank();
    processor.Process();

    auto file_processor = processor.GetResult();
    // for (auto i : file_processor)
    // {
    //     for (auto j : i)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
    BdfTransfer transfer(processor.GetResult());
    transfer.trans();
}