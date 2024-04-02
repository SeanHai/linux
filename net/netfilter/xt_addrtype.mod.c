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
	{ 0x1cec7d80, "xt_unregister_matches" },
	{ 0x2431ba19, "xt_register_matches" },
	{ 0xedb13a08, "inet_dev_addr_type" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfdf6be0b, "nf_ipv6_ops" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BAF41E5C2472AF6E6031776");
MODULE_INFO(rhelversion, "8.0");
