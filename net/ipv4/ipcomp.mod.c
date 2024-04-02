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
	{ 0x4b4e9b09, "ipcomp_output" },
	{ 0xb1637b8e, "ipcomp_input" },
	{ 0x347d6287, "ipcomp_destroy" },
	{ 0x80390095, "xfrm_input" },
	{ 0x61e994ef, "xfrm4_rcv" },
	{ 0x75d3f0c2, "xfrm4_protocol_deregister" },
	{ 0xab6172c, "xfrm_unregister_type" },
	{ 0x9637055a, "xfrm4_protocol_register" },
	{ 0x27e1a049, "printk" },
	{ 0xb0c53c85, "xfrm_register_type" },
	{ 0x87cf308b, "ipv4_update_pmtu" },
	{ 0xafd24650, "ipv4_redirect" },
	{ 0x98c2d757, "__xfrm_state_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x72833b58, "xfrm_state_insert" },
	{ 0xe39a3c2a, "xfrm_init_state" },
	{ 0x75952ba7, "xfrm_state_alloc" },
	{ 0xe5dad3af, "xfrm_state_lookup" },
	{ 0x1e1b20d, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "9006F9B6DE7160554F07F6A");
MODULE_INFO(rhelversion, "8.0");
