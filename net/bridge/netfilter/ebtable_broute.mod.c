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
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc9170152, "br_should_route_hook" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x94935504, "ebt_register_table" },
	{ 0x8c18c4dd, "ebt_unregister_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x25ca8809, "ebt_do_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge,ebtables";


MODULE_INFO(srcversion, "611B3BB4E7DA458C9F57855");
MODULE_INFO(rhelversion, "8.0");
