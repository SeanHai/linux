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
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x2f51efd4, "audit_log_start" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd0f36f0d, "audit_log_format" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4F5C3C881504179B12958E4");
MODULE_INFO(rhelversion, "8.0");
