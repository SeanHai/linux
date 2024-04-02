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
	{ 0xed946a48, "init_net" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x24a89244, "xt_hook_ops_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0a8f6e8, "ip6t_register_table" },
	{ 0x74fde693, "ip6t_alloc_initial_table" },
	{ 0xa0a37eac, "ip6t_do_table" },
	{ 0x2fdac996, "ip6t_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables";


MODULE_INFO(srcversion, "413E0B59DDFE5572B907628");
MODULE_INFO(rhelversion, "8.0");
