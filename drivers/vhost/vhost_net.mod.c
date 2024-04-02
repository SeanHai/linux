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
	{ 0x423a5cb2, "vhost_vq_avail_empty" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xde320733, "sockfd_lookup" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xad1d2f9e, "vhost_dev_check_owner" },
	{ 0x6c0aae33, "vhost_poll_start" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb53fd451, "vhost_chr_poll" },
	{ 0xa6841fb6, "tun_ptr_to_xdp" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb71f305b, "vhost_dev_cleanup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xba47c0b3, "vhost_log_access_ok" },
	{ 0xfe5e4f6, "vhost_enable_notify" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7486b3ac, "vhost_dev_has_owner" },
	{ 0xd30f8e93, "vhost_poll_flush" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xef265087, "vq_iotlb_prefetch" },
	{ 0x9514fe5f, "vhost_disable_notify" },
	{ 0x6bddef80, "misc_register" },
	{ 0x3c14fe37, "vhost_dev_ioctl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9b3f3f95, "vhost_log_write" },
	{ 0xd69fbcb0, "vhost_chr_read_iter" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7daf20e5, "vhost_get_vq_desc" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x8ec02a80, "vhost_chr_write_iter" },
	{ 0xed36dad2, "vhost_dev_set_owner" },
	{ 0xbd3b3d58, "vhost_add_used_and_signal_n" },
	{ 0x4b54fc7f, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x50d83074, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x818d3bbc, "vhost_add_used_and_signal" },
	{ 0xcc2034b0, "vhost_discard_vq_desc" },
	{ 0x66876fe6, "tun_get_socket" },
	{ 0x88dcc553, "vhost_poll_queue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x641446be, "tun_get_tx_ring" },
	{ 0x5c316cd0, "vhost_poll_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x222e267a, "vhost_vq_init_access" },
	{ 0x27055133, "vhost_poll_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x302ee579, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xace2e86c, "vhost_dev_reset_owner" },
	{ 0xd8602b6a, "tun_is_xdp_frame" },
	{ 0xaa05a7d1, "vhost_has_work" },
	{ 0x182d5aea, "vhost_dev_init" },
	{ 0x81c1dbf4, "fget" },
	{ 0xdbdd81da, "iov_iter_advance" },
	{ 0xbda1502, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8cfb608a, "vhost_dev_stop" },
	{ 0x1863470f, "vhost_vq_access_ok" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0xf0cd1d60, "tap_get_ptr_ring" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6b052e6, "vhost_vring_ioctl" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0xbd51683, "vhost_init_device_iotlb" },
	{ 0xceb66bec, "sched_clock_cpu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vhost,tun,tap";


MODULE_INFO(srcversion, "582E764C2D0D60894ECA060");
MODULE_INFO(rhelversion, "8.0");
