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
	{ 0xecba9d10, "gigaset_m10x_input" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4b271150, "gigaset_stop" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa1cb916d, "gigaset_freedriver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x6bd461c1, "n_tty_ioctl_helper" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdbf7900b, "gigaset_initdriver" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4b8a88fc, "gigaset_initcs" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x593216c9, "platform_device_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x61e27a0e, "gigaset_skb_sent" },
	{ 0xd3dcfb16, "gigaset_freecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9d589295, "gigaset_add_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xa3151853, "gigaset_dbg_buffer" },
	{ 0x29361773, "complete" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x51526d35, "tty_register_ldisc" },
	{ 0xe5a06dd, "gigaset_start" },
	{ 0xda723b50, "gigaset_m10x_send_skb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gigaset";


MODULE_INFO(srcversion, "EF0C1278932EDD157B66FDD");
MODULE_INFO(rhelversion, "8.0");
