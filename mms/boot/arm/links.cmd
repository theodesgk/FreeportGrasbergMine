IF EXIST domestic (
   fsutil hardlink create PrismNet .\domestic\PrismNet) ELSE (
   fsutil hardlink create PrismNet .\export\PrismNet)
