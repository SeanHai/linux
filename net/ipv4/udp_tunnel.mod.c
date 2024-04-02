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
	{ 0xa317e6b9, "sock_release" },
	{ 0x3398015f, "metadata_dst_alloc" },
	{ 0xe13bfd58, "sock_create_kern" },
	{ 0xd49bf999, "kernel_connect" },
	{ 0x2e0755a8, "iptunnel_xmit" },
	{ 0xa19adae5, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xc26ae7ad, "ipv6_stub" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xddf11bf7, "udp_set_csum" },
	{ 0x4711e547, "kernel_bind" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CCD2428F1623C24BA34AF5F");
MODULE_INFO(rhelversion, "8.0");
