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
	{ 0x3d9728cf, "tcp_reno_undo_cwnd" },
	{ 0x86be18cc, "tcp_unregister_congestion_control" },
	{ 0xf5e9753, "tcp_register_congestion_control" },
	{ 0x842b2d13, "tcp_slow_start" },
	{ 0xc688ad90, "tcp_cong_avoid_ai" },
	{ 0xd93f3158, "tcp_reno_cong_avoid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BCAD17B3C7F4278FBD4C5A9");
MODULE_INFO(rhelversion, "8.0");
