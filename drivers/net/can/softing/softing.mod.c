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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf025b47f, "register_candev" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x7a5f31b0, "alloc_candev" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xc4082c9b, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9df2273, "can_bus_off" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x2a661171, "close_candev" },
	{ 0xf10de535, "ioread8" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa622d224, "dev_close" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd4f59b29, "free_candev" },
	{ 0xc89d1d60, "can_change_mtu" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf63ba7e9, "unregister_candev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa13b3006, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8972397, "open_candev" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x76a7c109, "dev_alert" },
	{ 0xedc03953, "iounmap" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb731ac23, "can_get_echo_skb" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xe9da2271, "can_put_echo_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xe484e35f, "ioread32" },
	{ 0x85f5e2aa, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";


MODULE_INFO(srcversion, "79E267FE7DC213C22A0D55B");
MODULE_INFO(rhelversion, "8.0");
