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
	{ 0x36fd4d8e, "unregister_hdlc_protocol" },
	{ 0x5024e51, "register_hdlc_protocol" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0x342be01b, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6cbbc89, "capable" },
	{ 0x318f7969, "add_timer" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x672d3458, "linkwatch_fire_event" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x5def83f9, "skb_push" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hdlc";


MODULE_INFO(srcversion, "B1C531515B4749C7C39B66C");
MODULE_INFO(rhelversion, "8.0");
