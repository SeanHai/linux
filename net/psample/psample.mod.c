#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0x604651e7, "genl_register_family" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xaaa60325, "genl_unregister_family" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x6ccf6eb0, "netlink_broadcast" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2809a43b, "genlmsg_put" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x317cc4af, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "46829C72B2EC413619AEBFC");
MODULE_INFO(rhelversion, "8.0");
