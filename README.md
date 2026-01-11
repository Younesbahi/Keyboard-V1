# Mechanical Keyboard V1

## What this is
This is a custom mechanical keyboard that I designed from scratch. I designed the PCB, selected all the components, and created the case in Fusion 360.

The keyboard uses a Raspberry Pi Pico microcontroller, a diode matrix, and a custom layout. It also has a 0.96-inch OLED screen.

## Features
- Custom keyboard layout
- Number row acts as function keys when Fn is held
- Mechanical MX-style switches
- Diode matrix
-  OLED screen
- 3D-printed case

## Layout

## Bill of Materials (BOM)

| Item                | Description                        | Quantity | Unit Price | Total Price | URL                                                                                                                                                                                                                  | Running Total ($ with Tax) | Total w/ Shipping |
|--------------------|------------------------------------|---------|------------|------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------|-----------------|
| PCB                | Keyboard PCB                       | 5       | $3.46      | $17.30     | [JLCPCB](https://jlcpcb.com/)                                                                                                                                                                                       | $30.31                    | $33.65          |
| MCU                | Raspberry Pi Pico                  | 1       | $2.64      | $2.64      | [AliExpress](https://www.aliexpress.com/item/1005006615944063.html?spm=a2g0o.cart.0.0.34ff38dak8zI5C&mp=1&pdp_npi=6%40dis%21USD%21USD%202.64%21USD%202.64%21%21USD%202.64%21%21%21%402101e8f317680786548757992efb8a%2112000037830228611%21ct%21CA%216994311444%21%211%210%21) | $2.64                     | $2.64           |
| Switches           | Outemu Cream Yellow                | 70      | $0.267     | $18.69     | [AliExpress](https://www.aliexpress.com/item/1005006263528658.html?spm=a2g0o.cart.0.0.3ea738daCRAVLy&mp=1&pdp_npi=6%40dis%21USD%21USD%2018.69%21USD%2018.69%21%21USD%2018.69%21%21%21%4021033d1217680085731295916ed11c%2112000036520553929%21ct%21CA%216994311444%21%211%210%21) | $18.69                    | $18.69          |
| Diodes             | 1N4148 DO-35 IN4148                | 100     | $0.0202    | $2.02      | [AliExpress](https://www.aliexpress.com/item/1005007807649334.html?spm=a2g0o.cart.0.0.3ea738daCRAVLy&mp=1&pdp_npi=6%40dis%21USD%21USD%202.02%21USD%202.02%21%21USD%202.02%21%21%21%4021033d1217680085731295916ed11c%2112000042270438468%21ct%21CA%216994311444%21%211%210%21) | $2.02                     | $2.02           |
| Stabilizers        | PCB-mount stabilizers              | 1       | $6.86      | $6.86      | [AliExpress](https://www.aliexpress.com/item/1005004229140548.html?spm=a2g0o.detail.0.0.42705OPY5OPYZb&mp=1&pdp_npi=6%40dis%21USD%21USD%206.86%21USD%206.86%21%21USD%206.86%21%21%21%402103122117680092977833580ea6cf%2112000028456713257%21ct%21CA%216994311444%21%211%210%21) | $6.86                     | $6.86           |
| Standoff            | M3 Standoffs 6mm                   | 50      | $0.0386    | $1.93      | [AliExpress](https://www.aliexpress.com/item/32539100523.html?spm=a2g0o.detail.0.0.3c99DXfpDXfpkB&mp=1&pdp_npi=6%40dis%21USD%21USD%201.61%21USD%201.61%21%21USD%201.61%21%21%21%402103122117680093888736500ea6cf%2112000036690751384%21ct%21CA%216994311444%21%211%210%21&pdp_ext_f=%7B%22cart2PdpParams%22%3A%7B%22pdpBusinessMode%22%3A%22retail%22%7D%7D) | $1.93                     | $1.93           |
| Screws              | M3 Screws 5mm                      | 50      | $0.0322    | $1.61      | [AliExpress](https://www.aliexpress.com/item/32539100523.html?spm=a2g0o.productlist.0.0.df4a6416YomQSb&mp=1&pdp_npi=6%40dis%21USD%21USD%201.61%21USD%201.61%21%21USD%201.61%21%21%21%402103122117680095346584016ea6cf%2112000036690751384%21ct%21CA%216994311444%21%211%210%21&pdp_ext_f=%7B%22cart2PdpParams%22%3A%7B%22pdpBusinessMode%22%3A%22retail%22%7D%7D) | $1.61                     | $1.61           |
| Inserts             | M3 Heat inserts                    | 50      | $0.0452    | $2.26      | [AliExpress](https://www.aliexpress.com/item/1005003582355741.html?spm=a2g0o.detail.0.0.6235j6Sfj6SfOC&mp=1&pdp_npi=6%40dis%21USD%21USD%202.26%21USD%202.26%21%21USD%202.26%21%21%21%402103122117680095514434382ea6cf%2112000026370649726%21ct%21CA%216994311444%21%211%210%21) | $2.26                     | $2.26           |
| KeyCaps             | Keycaps for Cherry MX Switches     | 1       | $11.49     | $11.49     | [AliExpress](https://www.aliexpress.com/item/1005009580866548.html?spm=a2g0o.cart.0.0.5b8538daREDYj3&mp=1&pdp_npi=6%40dis%21USD%21USD%2011.49%21USD%2011.49%21%21USD%2011.49%21%21%21%402103122117680097581772043ea6cf%2112000049526083200%21ct%21CA%216994311444%21%211%210%21) | $11.49                    | $11.49          |
| Case                | 3D Printed case                     | 1       | -          | -          | -                                                                                                                                                                                                                    | -                         | -               |
| I2C OLED 0.91"      | OLED screen                        | 1       | $2.53      | $2.53      | [AliExpress](https://www.aliexpress.com/item/1005006297182727.html?spm=a2g0o.cart.0.0.34ff38dak8zI5C&mp=1&pdp_npi=6%40dis%21USD%21USD%202.53%21USD%202.53%21%21USD%202.53%21%21%21%402101e8f317680786548757992efb8a%2112000036657700927%21ct%21CA%216994311444%21%211%210%21) | $2.53                     | $2.53           |

**Total Cost:** $83.68  (Not including Case)
| Schematic | PCB Layout | PCB render |
|--------------|--------------|--------------|
| <img width="1426" height="894" alt="image" src="https://github.com/user-attachments/assets/2edc3e6d-bb3f-4dac-aa77-570bae734509" />| <img width="942" height="356" alt="Screenshot 2026-01-10 164028" src="https://github.com/user-attachments/assets/e0840cb7-6ac8-482e-88db-860d1997574f" /> |<img width="807" height="387" alt="Screenshot 2026-01-10 164126" src="https://github.com/user-attachments/assets/54c86d92-609d-4309-8a30-ded0bcbeccb6" />|

## Render 
<img width="962" height="722" alt="top view" src="https://github.com/user-attachments/assets/0abc7faa-9383-4e98-bfed-6c2fa1ce514c" />

<img width="962" height="722" alt="side view" src="https://github.com/user-attachments/assets/cba0e966-7b33-4a01-8da5-2e712d12f9c7" />

