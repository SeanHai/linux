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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xaf273372, "vlan_dev_vlan_id" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc4d1388a, "uio_unregister_device" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf89c9227, "vlan_dev_real_dev" },
	{ 0x7e3c4df3, "uio_event_notify" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xeae3f506, "ip6_route_output_flags" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x66dea867, "__uio_register_device" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";


MODULE_INFO(srcversion, "13E0DA36AE546F47D86CA9B");
MODULE_INFO(rhelversion, "8.0");
