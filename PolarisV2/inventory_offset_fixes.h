/*
* Copyright (c) 2021, Polaris All rights reserved.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
* OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef INVENTORY_OFFSET_FIXES_H
#define INVENTORY_OFFSET_FIXES_H

#include "SDK.hpp"

namespace polaris::models::offsetfixes
{
    struct WorldInventory
    {
        unsigned char UnknownData00[0x1D28];
        class SDK::AFortInventory* WorldInventory;
    };
    struct ParentInventory
    {
        unsigned char UnknownData00[0x0098];
        class SDK::AFortInventory               ParentInventory;
    };
    struct OwnerInventory
    {
        unsigned char UnknownData00[0x01D8];
        class SDK::AFortInventory* OwnerInventory;
    }; 
}

#endif // !INVENTORY_OFFSET_FIXES
