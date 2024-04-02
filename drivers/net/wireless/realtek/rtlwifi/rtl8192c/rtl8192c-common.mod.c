#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3dc3bc3e, "rtl_dm_diginit" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xcbba77fd, "rtl_fw_page_write" },
	{ 0x4484bec, "rtl_cmd_send_packet" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0d704fe, "rtl_fw_block_write" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xeb4b9a49, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi";


MODULE_INFO(srcversion, "AFC0D7DCB46D280A5A1FBFC");
MODULE_INFO(rhelversion, "8.0");
