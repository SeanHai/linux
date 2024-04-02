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
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc449f37c, "llc_sap_open" },
	{ 0x1af5c32c, "llc_sap_close" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "AFBB842A0563D27C8F56BBF");
MODULE_INFO(rhelversion, "8.0");
