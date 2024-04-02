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
	{ 0xb4f05f54, "udp6_set_csum" },
	{ 0xa317e6b9, "sock_release" },
	{ 0xe13bfd58, "sock_create_kern" },
	{ 0xf99aa0b1, "kernel_setsockopt" },
	{ 0xd49bf999, "kernel_connect" },
	{ 0xa19adae5, "kernel_sock_shutdown" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4711e547, "kernel_bind" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x897e956d, "ip6_local_out" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "349542EE2427C6C3BDC59F2");
MODULE_INFO(rhelversion, "8.0");
