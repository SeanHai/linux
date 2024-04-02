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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe2d2e91f, "freq_reg_info" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1dfc3e50, "ieee80211_get_channel" },
	{ 0xabec451b, "wiphy_apply_custom_regulatory" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdba126c1, "reg_initiator_name" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "6472C44D3E1911E7AC15723");
MODULE_INFO(rhelversion, "8.0");
