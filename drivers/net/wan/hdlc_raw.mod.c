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
	{ 0x36fd4d8e, "unregister_hdlc_protocol" },
	{ 0x5024e51, "register_hdlc_protocol" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x672d3458, "linkwatch_fire_event" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0x342be01b, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hdlc";


MODULE_INFO(srcversion, "2AE702B77E421B96EFF9D1F");
MODULE_INFO(rhelversion, "8.0");
