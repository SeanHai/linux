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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x5def83f9, "skb_push" },
	{ 0xcdebca32, "hci_recv_frame" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x34584d81, "hci_register_dev" },
	{ 0xf3ff96ef, "hci_alloc_dev" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7442057, "bt_info" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x16e9a4fd, "skb_unlink" },
	{ 0x47022514, "bt_err" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x962eeb53, "hci_free_dev" },
	{ 0xe10f17e, "hci_unregister_dev" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "164D7D98FD4726EAAD443EA");
MODULE_INFO(rhelversion, "8.0");
