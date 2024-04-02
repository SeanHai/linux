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
	{ 0x5807105, "inet_twsk_put" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xa8d78bfc, "tcp_hashinfo" },
	{ 0xa592a1a, "sk_free" },
	{ 0xc9ef225c, "inet_twsk_deschedule_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65c933d5, "udp4_lib_lookup" },
	{ 0x9000f3fd, "__inet_lookup_listener" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x1b7878c9, "__inet_lookup_established" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6270A6EC1351F0D2D92F46D");
MODULE_INFO(rhelversion, "8.0");
