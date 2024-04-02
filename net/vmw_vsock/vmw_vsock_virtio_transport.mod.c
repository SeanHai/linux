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
	{ 0x317a8ad6, "flush_work" },
	{ 0x373ba864, "release_sock" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x87ebe70e, "virtio_transport_recv_pkt" },
	{ 0xba64ac97, "virtio_transport_set_buffer_size" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xac3a71c3, "virtio_transport_destruct" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x957692ae, "virtio_transport_get_max_buffer_size" },
	{ 0xc18f6312, "virtio_transport_notify_send_pre_block" },
	{ 0x52d795a2, "virtio_transport_stream_has_space" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7cc98cee, "virtio_transport_notify_poll_in" },
	{ 0xb884721e, "virtio_transport_do_socket_init" },
	{ 0xf6cbc819, "virtqueue_add_inbuf" },
	{ 0xd4f6387d, "virtio_transport_stream_is_active" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0x85f15121, "__vsock_core_init" },
	{ 0x42abc213, "virtio_transport_deliver_tap_pkt" },
	{ 0x9f46a0fd, "virtio_transport_set_min_buffer_size" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x6a588e9e, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x8a92eefd, "virtio_transport_notify_poll_out" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x67686d8e, "virtqueue_add_sgs" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0x8d89146d, "virtio_transport_stream_dequeue" },
	{ 0x280160b5, "virtqueue_disable_cb" },
	{ 0x2900a7d8, "virtio_transport_stream_enqueue" },
	{ 0x4e3b4b33, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6900d81e, "virtio_transport_notify_send_pre_enqueue" },
	{ 0xe15c083, "virtio_transport_notify_send_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1b9f706b, "virtqueue_get_vring_size" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x76cd5c51, "virtio_transport_get_buffer_size" },
	{ 0xaa24938c, "unregister_virtio_driver" },
	{ 0x32e46182, "virtio_transport_dgram_dequeue" },
	{ 0x85ea432d, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3249b7cd, "virtio_transport_shutdown" },
	{ 0x910454d7, "virtio_transport_dgram_enqueue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x90890c47, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xd1b7171a, "virtio_transport_free_pkt" },
	{ 0xbad669df, "virtio_transport_dgram_bind" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x76711e62, "virtio_transport_stream_rcvhiwat" },
	{ 0x21ad02aa, "virtio_transport_set_max_buffer_size" },
	{ 0xf00b582d, "virtio_transport_stream_has_data" },
	{ 0x121da905, "queue_work_on" },
	{ 0xd691eb09, "virtio_transport_connect" },
	{ 0x5eda95a0, "virtqueue_detach_unused_buf" },
	{ 0x4f2c6724, "vsock_for_each_connected_socket" },
	{ 0xc244b1aa, "virtqueue_enable_cb" },
	{ 0x5dcf356f, "virtio_transport_release" },
	{ 0xbe9507c0, "virtio_transport_get_min_buffer_size" },
	{ 0xed0e794, "virtio_transport_notify_recv_init" },
	{ 0xff5d0490, "register_virtio_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,virtio_ring,vsock,virtio";

MODULE_ALIAS("virtio:d00000013v*");

MODULE_INFO(srcversion, "D7B78AE08933AD31E2072C3");
MODULE_INFO(rhelversion, "8.0");
