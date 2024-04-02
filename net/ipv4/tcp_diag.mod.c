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
	{ 0xf4949afe, "inet_diag_unregister" },
	{ 0x86670133, "inet_diag_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a8f41f6, "nla_reserve" },
	{ 0xa7d0c081, "inet_diag_dump_icsk" },
	{ 0x374207bb, "inet_diag_dump_one_icsk" },
	{ 0xa8d78bfc, "tcp_hashinfo" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd84d8fe7, "tcp_get_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "9EA4C76911EBA01C3ACD6B8");
MODULE_INFO(rhelversion, "8.0");
