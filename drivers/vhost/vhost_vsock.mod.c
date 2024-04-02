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
	{ 0x87ebe70e, "virtio_transport_recv_pkt" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xba64ac97, "virtio_transport_set_buffer_size" },
	{ 0xac3a71c3, "virtio_transport_destruct" },
	{ 0xbd7552ef, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xad1d2f9e, "vhost_dev_check_owner" },
	{ 0x957692ae, "virtio_transport_get_max_buffer_size" },
	{ 0xc18f6312, "virtio_transport_notify_send_pre_block" },
	{ 0x52d795a2, "virtio_transport_stream_has_space" },
	{ 0x540fab50, "_copy_from_iter" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7cc98cee, "virtio_transport_notify_poll_in" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb884721e, "virtio_transport_do_socket_init" },
	{ 0xd4f6387d, "virtio_transport_stream_is_active" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x85f15121, "__vsock_core_init" },
	{ 0xb71f305b, "vhost_dev_cleanup" },
	{ 0xba47c0b3, "vhost_log_access_ok" },
	{ 0x42abc213, "virtio_transport_deliver_tap_pkt" },
	{ 0x9f46a0fd, "virtio_transport_set_min_buffer_size" },
	{ 0xfe5e4f6, "vhost_enable_notify" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x6a588e9e, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x8a92eefd, "virtio_transport_notify_poll_out" },
	{ 0xd30f8e93, "vhost_poll_flush" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x9514fe5f, "vhost_disable_notify" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x6bddef80, "misc_register" },
	{ 0x44be4c10, "vhost_signal" },
	{ 0x3c14fe37, "vhost_dev_ioctl" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8d89146d, "virtio_transport_stream_dequeue" },
	{ 0x2900a7d8, "virtio_transport_stream_enqueue" },
	{ 0x4e3b4b33, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7daf20e5, "vhost_get_vq_desc" },
	{ 0x6900d81e, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x72596f1e, "vhost_work_queue" },
	{ 0xe15c083, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x76cd5c51, "virtio_transport_get_buffer_size" },
	{ 0x88dcc553, "vhost_poll_queue" },
	{ 0x32e46182, "virtio_transport_dgram_dequeue" },
	{ 0x85ea432d, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3249b7cd, "virtio_transport_shutdown" },
	{ 0x910454d7, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x222e267a, "vhost_vq_init_access" },
	{ 0x90890c47, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xd1b7171a, "virtio_transport_free_pkt" },
	{ 0xbad669df, "virtio_transport_dgram_bind" },
	{ 0x302ee579, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x76711e62, "virtio_transport_stream_rcvhiwat" },
	{ 0x21ad02aa, "virtio_transport_set_max_buffer_size" },
	{ 0x182d5aea, "vhost_dev_init" },
	{ 0x8cfb608a, "vhost_dev_stop" },
	{ 0x1863470f, "vhost_vq_access_ok" },
	{ 0xf00b582d, "virtio_transport_stream_has_data" },
	{ 0xd691eb09, "virtio_transport_connect" },
	{ 0x4f2c6724, "vsock_for_each_connected_socket" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6b052e6, "vhost_vring_ioctl" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x5dcf356f, "virtio_transport_release" },
	{ 0xbe9507c0, "virtio_transport_get_min_buffer_size" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xed0e794, "virtio_transport_notify_recv_init" },
	{ 0x4b586988, "vhost_add_used" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,vhost,vsock";


MODULE_INFO(srcversion, "341D6F3BE1978CC4679D047");
MODULE_INFO(rhelversion, "8.0");
