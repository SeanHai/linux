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
	{ 0xf0a16657, "FsmNew" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xdb17a95f, "FsmInitTimer" },
	{ 0x148f0c99, "FsmFree" },
	{ 0x27e1a049, "printk" },
	{ 0x5def83f9, "skb_push" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x93a64734, "FsmChangeState" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1e01660e, "vsnprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe647e327, "FsmRestartTimer" },
	{ 0x509f625d, "consume_skb" },
	{ 0x9df0cd27, "FsmEvent" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x2ab78ca8, "FsmDelTimer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hisax";


MODULE_INFO(srcversion, "866F65A99E3E6132EABC9A6");
MODULE_INFO(rhelversion, "8.0");
