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
	{ 0xbca18818, "skb_queue_head" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x16e9a4fd, "skb_unlink" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x579a308c, "skb_dequeue_tail" },
	{ 0xfb578fc5, "memset" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x28318305, "snprintf" },
	{ 0xeb4b9a49, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "389318E018771B5453D0B02");
MODULE_INFO(rhelversion, "8.0");
