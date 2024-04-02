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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x24a89244, "xt_hook_ops_alloc" },
	{ 0xed946a48, "init_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x47604b13, "ipt_register_table" },
	{ 0x216afa07, "ipt_alloc_initial_table" },
	{ 0x3f835fc6, "ipt_do_table" },
	{ 0x9267f52e, "ipt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables";


MODULE_INFO(srcversion, "2D91BA0B072829DD78F99DF");
MODULE_INFO(rhelversion, "8.0");
